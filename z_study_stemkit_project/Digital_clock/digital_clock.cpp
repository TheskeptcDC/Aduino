// the clock display is atttached to an msp23017e/sp 1523
// with 5v sda scl ground
#include <Wire.h>
#include <Adafruit_MCP23017.h>         //for the expander 

Adafruit_MCP23017 expander;

unsigned long previousMillis = 0;
const long interval = 1000;
int second = 0;
int minute = 0;

void setup() {
  Wire.begin();
  expander.begin();      // Initialize MCP23017

  for (int i = 0; i < 16; i++) {
    expander.pinMode(i, OUTPUT);
    expander.digitalWrite(i, LOW);
  }
}

void loop() {
  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis >= interval) {
    previousMillis = currentMillis;
    second++;
    if (second >= 60) {
      second = 0;
      minute++;
    }
  }

  displayTime(minute, second);
}

void displayTime(int minute, int second) {
  // Example mapping of segments for 7-segment display
  // Segment mapping should correspond to your actual wiring
  byte segments[10] = {
    0b00111111, // 0
    0b00000110, // 1
    0b01011011, // 2
    0b01001111, // 3
    0b01100110, // 4
    0b01101101, // 5
    0b01111101, // 6
    0b00000111, // 7
    0b01111111, // 8
    0b01101111  // 9
  };

  // Display  minutes, and seconds on the 7-segment display
  // we have 4 digits  2 for minutes, 2 for seconds)
//   lets try the seven seg library to fasilitate the disply 
  
}
