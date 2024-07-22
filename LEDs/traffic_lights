// using 3 SINGLE LIGHT LEDs to simulate a traffic lights  like sequence
// the LEDs are connected to 3 digital pins 9,10 and 11 as red, green and orange respectively
// the circuit is shown in wiring_components(2).png 

#define red 9
#define green 10
#define orange 11

void setup(){
    pinMode(green,OUTPUT);
    pinMode(red,OUTPUT);
    pinMode(orange,OUTPUT);
}

void loop(){
    // orange on for 2 seconds 
    digitalWrite(orange,1);
    digitalWrite(green,0);
    digitalWrite(red,0);
    delay(2000);
    // green on for 5 seconds 
    digitalWrite(green,1);
    digitalWrite(orange,0);
    digitalWrite(red,0);
    delay(5000);
    // orange on again for 2 seconds 
    digitalWrite(orange,1);
    digitalWrite(red,0);
    digitalWrite(green,0);
    delay(2000);
    // red on for 5 seconds 
    digitalWrite(red,1);
    digitalWrite(orange,0);
    digitalWrite(green,0);
    delay(5000);

}