#include <Wire.h>
#include "Adafruit_MCP23017.h"
#include <SevSeg.h>

Adafruit_MCP23017 mcp;
SevSeg sevseg;

void setup() {
  mcp.begin();      // use default address 0
  Wire.begin();

  // Define the digit and segment pins based on the MCP23017 pin numbers
  byte digitPins[] = {0, 1, 2, 3}; // Example digit pins on the MCP23017
  byte segmentPins[] = {4, 5, 6, 7, 8, 9, 10, 11}; // Example segment pins on the MCP23017
  
  bool resistorsOnSegments = true; // 'true' means resistors are on the segment pins
  byte hardwareConfig = COMMON_CATHODE; // COMMON_CATHODE or COMMON_ANODE
  bool updateWithDelays = false; // Default 'false' is recommended
  bool leadingZeros = true; // Use 'true' if you'd like to keep the leading zeros
  bool disableDecPoint = true; // Use 'true' if your display doesn't have a decimal point
  
  sevseg.begin(hardwareConfig, 4, digitPins, segmentPins, resistorsOnSegments);
  sevseg.setBrightness(90);
}

void loop() {
  sevseg.setNumber(1234); // Example number to display
  sevseg.refreshDisplay(); // Must run repeatedly
}