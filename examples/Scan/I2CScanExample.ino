#include <I2CScanner.h>

I2CScanner scanner;

void setup() {
    Serial.begin(115200);
    scanner.scanI2C();
}

void loop() {
}
