//reading the input(voltage) of a light sensor
// then displaying the values (light intensity) on a serial monitor 
// the light sensor is connected to pin A1 
// ...calculate the light intemsity as a percentage 
// print the values every 2 seconds 
#define light_sensor

void setup(){
    Serial.begin(115200);

}

void loop(){
    int light_intensity = (256 * analogRead(light_sensor))/100;
    
    Serial.println(light_intensity + "%");
    delay(200);

}