#include "I2CScanner.h"

I2CScanner::I2CScanner() {
    Wire.begin();
}

I2CScanner::I2CScanner(uint8_t sda, uint8_t scl) {
    Wire.begin(sda, scl);
}

void I2CScanner::scanI2C() {
    Serial.println("Scanning I2C bus...");
    for (uint8_t addr = 1; addr < 127; addr++) {
        Wire.beginTransmission(addr);
        if (Wire.endTransmission() == 0) {
            Serial.print("Device found at address 0x");
            Serial.println(addr, HEX);
        }
    }
    Serial.println("Scan complete.");
}
