#include <DHT.h>
#define DHTIN 2
#define DHTTYPE DHT11

DHT dht(DHTIN,DHTTYPE);


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  float temperature = dht.readTemperature();
  float humidity = dht.readHumidity();
  Serial.print("Temperature: ");
  Serial.println(temperature);
  Serial.print("humidity: ");
  Serial.println(humidity);
  delay(2000); // Waut 2 seconds before next reading
}
