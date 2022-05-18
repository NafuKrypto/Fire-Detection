#include <dht.h>

dht DHT;
const int buzzerPin = 12;
int redled = 5;
int greenled = 6;
int flag=0;
#define temp 2

void setup(){
  Serial.begin(9600);
  pinMode(buzzerPin, OUTPUT);
  pinMode(redled, OUTPUT);
  pinMode(greenled, OUTPUT);
}

void loop()
{
  int chk = DHT.read11(temp);
  Serial.print("Temperature = ");
  Serial.println(DHT.temperature);
  if(DHT.temperature<29){
    Serial.println(" No Fire!You are safe");
      digitalWrite(buzzerPin, LOW);
    digitalWrite(greenled, HIGH);
    digitalWrite(redled, LOW);
  }
  else if(DHT.temperature>29){
    Serial.println(" Fire");
    Serial.println("Your house is on Fire");
    digitalWrite(buzzerPin, HIGH);
    digitalWrite(redled, HIGH);
    digitalWrite(greenled, LOW);
  }
  //Serial.print("Humidity = ");
  //Serial.println(DHT.humidity);
  delay(2000);
}
