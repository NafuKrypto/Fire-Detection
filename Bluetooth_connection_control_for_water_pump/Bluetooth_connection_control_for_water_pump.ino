
void setup() 
{
  
 pinMode(8,OUTPUT);
 pinMode(9,OUTPUT);
 Serial.begin(9600);
 
}

void loop() 
{
  digitalWrite(9,LOW);
  
  
  if(Serial.available()>0)
  {
    int data = Serial.read();
    
    Serial.println(data);
    
    switch(data)
    
    {
      case 49:
      
    digitalWrite(8,HIGH);
    
    break;
    

    case 50:
    
    digitalWrite(8,LOW);
    
    break;
    
    }
           }
                 }

