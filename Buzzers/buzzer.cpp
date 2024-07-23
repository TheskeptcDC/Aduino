// using the buzzer (piazo), connected to pin 2 of the micro controller 
// pin 2 named palse_beep 
// the buzzer beeps every after 1 second 
// image palse_beep2.png      --for circit design 
#define palse_beep 6

void setup(){
    pinMode(palse_beep,OUTPUT);
}

void loop(){
    digitalWrite(palse_beep,1);
    delay(1000);
    digitalWrite(palse_beep,0);
    delay(1000);
}