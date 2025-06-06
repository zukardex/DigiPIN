#ifndef DIGIPIN_H
#define DIGIPIN_H

#include <Arduino.h>

class DigiPIN {
public:
    static String getDigiPin(float latitude, float longitude);
};

#endif
