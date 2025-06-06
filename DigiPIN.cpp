#include "DigiPIN.h"

const char DIGIPIN_GRID[4][4] = {
    {'F', 'C', '9', '8'},
    {'J', '3', '2', '7'},
    {'K', '4', '5', '6'},
    {'L', 'M', 'P', 'T'}
};

const float minLat = 2.5;
const float maxLat = 38.5;
const float minLon = 63.5;
const float maxLon = 99.5;

String DigiPIN::getDigiPin(float lat, float lon) {
    if (lat < minLat || lat > maxLat || lon < minLon || lon > maxLon) {
        return "OUT_OF_BOUNDS";
    }

    float minLatBound = minLat;
    float maxLatBound = maxLat;
    float minLonBound = minLon;
    float maxLonBound = maxLon;
    String pin = "";

    for (int level = 1; level <= 10; level++) {
        float latDiv = (maxLatBound - minLatBound) / 4.0;
        float lonDiv = (maxLonBound - minLonBound) / 4.0;

        int row = 3 - (int)((lat - minLatBound) / latDiv);
        int col = (int)((lon - minLonBound) / lonDiv);

        row = constrain(row, 0, 3);
        col = constrain(col, 0, 3);

        pin += DIGIPIN_GRID[row][col];

        if (level == 3 || level == 6) pin += '-';

        maxLatBound = minLatBound + latDiv * (4 - row);
        minLatBound = minLatBound + latDiv * (3 - row);

        minLonBound = minLonBound + lonDiv * col;
        maxLonBound = minLonBound + lonDiv;
    }

    return pin;
}
