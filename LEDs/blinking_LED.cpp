// a single colour LED (main_LED) is connected to pin 13 of the micro controller
// the LED goes on and then off after 1 second, repeat.
#define main_led 13

void setup(){
    pinMode(main_led,OUTPUT);
}

void loop(){
    digitalWrite(main_led,1);
    delay(1000);
    digitalWrite(main_led,0);
    delay(1000);
}