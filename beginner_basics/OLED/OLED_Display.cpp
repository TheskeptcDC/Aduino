// we display text on an OLED 
// we take advantage of the I2C ..for simpler circuitry
// using the library adafruit ..for easy confguration 

#include <Adafruit_SSD1306.h>
#include <Adafruit_GFX>

Adafruit_SSD1306 display(NULL);
void setup(){
    
    display.begin(SSD1306_SWITCHCAPVCC, 0x3C, false);   //start configuration 
    delay(500);                                         //..loading config
    display.clearDisplay();                             // clear the display
    display.setTextColor(WHITE);                        //
    display.setCursor(0,0);
    display.println("hello H3RO");
}

void loop(){

}