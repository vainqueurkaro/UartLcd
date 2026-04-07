# UartLcd Library for Arduino

A lightweight library to interface with 20x4 UART (Serial) LCD modules using SoftwareSerial.

## Installation
1. Download the repository.
2. Move the `UartLcd` folder to your `Documents/Arduino/libraries` folder.
3. Restart the Arduino IDE.

## Basic Usage
```cpp
#include <UartLcd.h>

UartLcd myLcd(2, 3); // RX, TX

void setup() {
  myLcd.begin(9600);
  myLcd.clear();
  myLcd.setCursor(0, 0);
  myLcd.print("Hello World!");
}