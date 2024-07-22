// using 3 SINGLE LIGHT LEDs to simulate a fuctioning 5 buttons stack
// the light that is on at the moment is printed on the serial monitor 
// 
// the buttons are connected to pins 4,5,6,7 and 8
// the LEDs are connected to 3 digital pins 9,10 and 11 as red, green and blue respectively


// LIGHTS
#define red 9
#define green 10
#define blue 11

//BUTTONS
#define green_on 4
#define blue_on 5
#define red_on 6
#define blue_green_on 7
#define yellow_on 8

void setup(){
    Serial.begin(115200)//starndard transfer rate 
    pinMode(green,OUTPUT);
    pinMode(red,OUTPUT);
    pinMode(blue,OUTPUT);
    pinMode(green_on,INPUT);
    pinMode(blue_on,INPUT);
    pinMode(red_on,INPUT);
    pinMode(blue_green_on,INPUT);
    pinMode(yellow_on,INPUT);
}

void loop(){
    if (digitalRead(green_on)== HIGH)
    {
        digitalWrite(green,0);
        Serial.println("GREEN");
    }
     
    if (digitalRead(blue_on))
    {
           digitalWrite(blue,1);
    }

    if (digitalRead(red_on)==HIGH)
    {
        digitalWrite(red,1);
    }
    
    if (digitalRead(blue_green_on)==HIGH)
    {   
        // ..later adjust values better "blue black"
        analogWrite(blue,250);
        analogWrite(green,235);
        analogWrite(red,100);
        Serial.println("blue black");
    }
    
}