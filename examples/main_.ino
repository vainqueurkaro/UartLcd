#include "UartLcd.h"

// Create an instance called 'myLcd' on pins 2 and 3
UartLcd myLcd(2, 3);

void setup() {
  myLcd.begin(9600);
  myLcd.clear();
  
  myLcd.setCursor(0, 0);
  myLcd.print("Hello Library!");
  
  myLcd.setCursor(0, 1);
  myLcd.print("Custom UART Class");
}

void loop() {
  // Nothing needed here for now
}
