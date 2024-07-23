//here we make the use of the sevseg library 
// the display connection are connected as dipicted in the image ...ADD CURRENT LIMITIG RISISTERS 

// the program counts from 1 to 9 on the display

#include "SevSeg"

SevSeg count;                                            //our display object instantiation 

void setup(){
        byte numDigits = 1;                              // Number of digits in your display
        byte digitPins[] = {};  
        byte segmentPins[] = {10, 11, 12, 13, A0, A1, A2};  // Pins for segments A to DP
        bool resistorsOnSegments = true;  
        byte hardwareConfig = COMMON_CATHODE;           // change to common anode if common anode is deing used 
        bool updateWithDelays = false;  

  count.begin(hardwareConfig, numDigits, digitPins, segmentPins, resistorsOnSegments);
  count.setBrightness(90);
}

void loop(){
    for (int i = 0; i < 10; i++)
    {
        count.setNumber(i);
        count.refreshDisplay();
        delay(1000);
    }
    
}