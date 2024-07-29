#define motor A2
#define speedometer A1
int speed = 0;

void setup(){
    Serial.begin(115200); 
    pinMode(motor,OUTPUT);
    pinMode(speedometer,INPUT);
}



void loop(){
    int reading= analogRead(speedometer);
          long speed = map(reading, 0, 1023, 0, 255);

          // Serial.print("@");
          Serial.println(speed);
          // delay((10));
    

}