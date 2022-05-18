#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
BlynkTimer timer;

char auth[] = "ffg53zUZjxI-yhAyd0QXwefYVlsOet97";
char ssid[] = "Rony";
char pass[] = "123456789";
int flag=0;
void notifyOnFire()
{
int isButtonPressed = digitalRead(D1);
if (isButtonPressed>29 && flag==0){

  Serial.println("Fire in the house");
Blynk.notify("Alert : Fire in the House");
flag=1;
}
else if(isButtonPressed<29)
{
    Serial.println("NO FIRE .STAY HAPPY");

flag=0;

}
}

void setup()
{
Serial.begin(9600);
Blynk.begin(auth, ssid, pass);
pinMode(D1,INPUT_PULLUP);
timer.setInterval(1000L,notifyOnFire);
}
void loop()
{
Blynk.run();
timer.run();
}
