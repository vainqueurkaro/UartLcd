#include "UartLcd.h"

// Initialize the SoftwareSerial object using the initializer list
UartLcd::UartLcd(int rx, int tx) : _serial(rx, tx) {}

void UartLcd::begin(long baud) {
  _serial.begin(baud);
  delay(500); // Wait for LCD boot
}

void UartLcd::clear() {
  _serial.write(0xFE); 
  _serial.write(0x01); 
  delay(10);
}

void UartLcd::setCursor(int col, int row) {
  int rowOffsets[] = {128, 192, 148, 212};
  _serial.write(0xFE); 
  _serial.write(rowOffsets[row] + col);
}

void UartLcd::print(String message) {
  _serial.print(message);
}
