// using the rgb LED to make different colours by adjusting the brightness og each RGB component
// the LED is connected to 3 digital pins 9,10 and 11 as red, green and orange respectively
// the circuit is shown in wiring_components(3).png 

#define red 10
#define green 7
#define blue 8

void setup(){
    pinMode(green,OUTPUT);
    pinMode(red,OUTPUT);
    pinMode(blue,OUTPUT);
}

void loop(){
    analogWrite(red,100);
    analogWrite(green,200);
    analogWrite(blue,20);
    delay(2000);
     analogWrite(red,100);
    analogWrite(green,250);
    analogWrite(blue,20);
    delay(2000);
}