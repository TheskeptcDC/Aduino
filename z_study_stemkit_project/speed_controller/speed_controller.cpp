#define motor A9
#define speedometer A3
int speed = 0;

void setup(){
    Serial.begin(115200); 
    pinMode(motor,OUTPUT);
    pinMode(speedometer,INPUT);
}



void loop(){
    long reading= analogRead(speedometer);
          speed = map(reading,0,200,0,1023);

          Serial.print('running @:');
          Serial.println(speed);
    

}