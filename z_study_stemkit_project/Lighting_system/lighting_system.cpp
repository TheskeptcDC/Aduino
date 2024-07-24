// 

#define relay 10               //on the board the relay IN  is connected to the digital pin 10


void setup(){
    pinMode(relay,OUTPUT);

}

void loop(){

    digitalWrite(relay,1);
    delay(5000);
    digitalWrite(relay,0);
    delay(5000);

}