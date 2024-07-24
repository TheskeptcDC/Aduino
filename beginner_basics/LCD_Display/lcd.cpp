// we connect an LCD to an aduino r3 
// in the circuit we will take advantage of the i2c bus 
// we will use Adafruit library for the lcd ..for easy configuration 
#iclude <wire.h>
#include <Adafruit_LiquidCrystal.h>

Adafruit_LiquidCrystal lcd_1(0);

void setup()
{
  lcd_1.begin(16, 2);

  lcd_1.print("hello H3RO");
}

void loop()
{
  lcd_1.setBacklight(1);
  delay(500); 
  lcd_1.setBacklight(0);
  delay(500); 

}