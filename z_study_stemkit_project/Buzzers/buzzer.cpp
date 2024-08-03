// using the buzzer (piazo), connected to pin 2 of the micro controller 
// pin 2 named palse_beep 
// the buzzer beeps every after 1 second 
// image palse_beep2.png      --for circit design 
#define palse_beep 7

void setup(){
    pinMode(palse_beep,OUTPUT);
}

void loop(){
    digitalWrite(palse_beep,1);
    delay(1000);
    digitalWrite(palse_beep,0);
    delay(1000);
    // longer time beeb
    digitalWrite(palse_beep,1);
    delay(2000);
    digitalWrite(palse_beep,0);
    delay(2000);
    // even longer beep
    digitalWrite(palse_beep,1);
    delay(3000);
    digitalWrite(palse_beep,0);
    delay(3000);
}