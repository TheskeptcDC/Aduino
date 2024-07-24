
// this a simulation of a weather station using by measuring temperature and humididty

// we use the DHT library ..for cofiguration 
#include <DHT.h>

#define station 7
#define sensor_type DHT11

DHT dht(station, sensor_type);

void setup(){
    dht.begin();
     Serial.begin(115200);//starndard transfer rate 
     
    Serial.println("TEMPARATURE AND HUMIDITY");

}


void loop(){
    delay(2000);
    float humidity = dht.readHumidity();
    float temperature = dht.computeHeatIndex('temparature',humidity,false);

    Serial.print("TEMP: ");
    Serial.println('temparature');
    Serial.print("HUMID: ");
    Serial.println(humidity);
    delay(2000);


}