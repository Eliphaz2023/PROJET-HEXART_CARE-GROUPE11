void setup()
{
int i;
for(i=1;i<=13;i++)
{pinMode(i,OUTPUT);
digitalWrite(i,LOW);
}}
void loop()
  {digitalWrite(2,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(11,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(6,LOW);
  digitalWrite(8,LOW);
  digitalWrite(10,LOW);
  digitalWrite(12,LOW);
  delay(1000);
  digitalWrite(4,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(12,HIGH);
  digitalWrite(2,LOW);
  digitalWrite(5,LOW);
  digitalWrite(7,LOW);
  digitalWrite(9,LOW);
  digitalWrite(11,LOW);
  delay(1000);
  
  
 
 
  
  
  

}
