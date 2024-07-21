// using the serial monitor to send data (text) to the aduino
// the aduino check for the sent data ..and print a welcome message to the serial monitor 
// as seen in serial_monitor12.png

void setup(){
    Serial.begin(115200);
    Serial.println-("WHAT IS YOUR NAME ?")
}

void loop(){
    if (Serial.available()>0)
    {
        Serial.println("welcome " + Serial.readStringUntil('\n'));
    }
    
}