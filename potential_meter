//this programme reads input (voltage) fromt the potential meter 
// then displays the values (voltage) on the serial monitor 
// the potential meter is connected to the A1 pin
// ..checks and prints the voltage every 2 seconds 
#define potential_meter A1
void setup(){
    Serial.begin(115200);
}

void loop(){
    int pot = analogRead(potential_meter);
    Serial.println(pot);
    delay(2000);
}