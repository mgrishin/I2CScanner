#ifndef I2CSCANNER_H
#define I2CSCANNER_H

#include <Wire.h>
#include <Arduino.h>

class I2CScanner {
public:
    I2CScanner();
    I2CScanner(uint8_t sda, uint8_t scl);
    void scanI2C();
};

#endif // I2CSCANNER_H
