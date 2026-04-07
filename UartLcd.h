#ifndef UARTLCD_H
#define UARTLCD_H

#include <Arduino.h>
#include <SoftwareSerial.h>

class UartLcd {
  public:
    // Constructor: sets the RX and TX pins
    UartLcd(int rx, int tx);
    
    // Functions available to the user
    void begin(long baud);
    void clear();
    void setCursor(int col, int row);
    void print(String message);

  private:
    SoftwareSerial _serial; // Private instance of SoftwareSerial
};

#endif
