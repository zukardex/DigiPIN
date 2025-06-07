# DigiPIN Arduino Library

This Arduino library encodes GPS coordinates into India Post's DigiPIN format (10-character code).

## Example
```cpp
#include <DigiPIN.h>

void setup() {
  Serial.begin(9600);
  Serial.println(DigiPIN::getDigiPin(8.5434657, 76.9031381));
}
```
## Installation
Clone this repository or download the ZIP.

Copy the DigiPIN folder into your Arduino/libraries/ folder.

Open Arduino IDE and run the example under File > Examples > DigiPIN > ConvertGPS.

## DigiPIN System
 For technical details about the DIGIPIN system, see:
 -  [DIGIPIN Technical Documentation (PDF)](https://www.indiapost.gov.in/VAS/DOP_PDFFiles/DIGIPIN%20Technical%20document.pdf)  
 -  [India Post DIGIPIN Portal](https://www.indiapost.gov.in/VAS/Pages/VASHome.aspx)

## Acknowledgements
This project is a C++ Adaptation of the original JavaScript code released by IndiaPost 