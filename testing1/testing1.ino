int isFlame=LOW;
const int buzzerPin = 12;
int redled = 5;
int greenled = 6;
void setup() {
  // put your setup code here, to run once:

pinMode(8,INPUT);
pinMode(buzzerPin, OUTPUT);
  pinMode(redled, OUTPUT);
  pinMode(greenled, OUTPUT);
  Serial.print(9600);
}

void loop() {
  isFlame=digitalRead(8);
  Serial.println("print isFlame digitalWrite");
  Serial.print(isFlame);
  if(isFlame<29){
    Serial.println(" BAAAL! no agun.chill");
     
    digitalWrite(buzzerPin, LOW);
    digitalWrite(greenled, HIGH);
    digitalWrite(redled, LOW);
    
    }
     else if(isFlame>29){
    Serial.println("i am on Fire");
    digitalWrite(buzzerPin, HIGH);
    digitalWrite(redled, HIGH);
    digitalWrite(greenled, LOW);
    }

  // put your main code here, to run repeatedly:

}
