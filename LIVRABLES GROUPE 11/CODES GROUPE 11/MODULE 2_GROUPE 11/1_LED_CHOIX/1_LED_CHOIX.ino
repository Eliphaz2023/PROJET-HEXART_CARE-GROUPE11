
  int choix;
  const int led1=2;
  const int led2=4;
  const int led3=5;
  const int led4=6;
  const int led5=7;
  const int led6=8;
  const int led7=9;
  const int led8=10;
  const int led9=11;
  const int led10=12;
  
 void setup(){
Serial.begin(9600);

pinMode(led1,OUTPUT);
pinMode(led2,OUTPUT);
pinMode(led3,OUTPUT);
pinMode(led4,OUTPUT);
pinMode(led5,OUTPUT);
pinMode(led6,OUTPUT);
pinMode(led7,OUTPUT);
pinMode(led8,OUTPUT);
pinMode(led9,OUTPUT);
pinMode(led10,OUTPUT);

 }
 
void loop() {
  // put your main code here, to run repeatedly:
 choix = random(2,13); // On a utilisé la fonction random pour que le choix soit aléatoire
    Serial.println("Le choix est"); //Ce messegage sera affiché sur le moniteur série,
    Serial.println(choix);      //suivi du numéro de la broche choisie aléatoirement

if(choix==2) // si ce choix est 2 voila ce qui va se passer ci-dessous
{
  
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);
  digitalWrite(led5, HIGH);
  digitalWrite(led6, HIGH);
  digitalWrite(led7, HIGH);
  digitalWrite(led8, HIGH);
  digitalWrite(led9, HIGH);
  digitalWrite(led10, HIGH);
  delay(5000); // on observe une pause de 5 secondes
}
else if(choix == 4) //si ce choix est 3 voila ce qui va se passer ci-dessous
{
 digitalWrite(led1, HIGH);
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);
  digitalWrite(led5, HIGH);
  digitalWrite(led6, HIGH);
  digitalWrite(led7,  HIGH);
  digitalWrite(led8, HIGH);
  digitalWrite(led9, HIGH);
  digitalWrite(led10, HIGH);
  delay(5000); // on observe une pause de 5 secondes
}
else if(choix==5) //si ce choix est 4 voila ce qui va se passer ci-dessous
{
 digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, LOW);
  digitalWrite(led4, HIGH);
  digitalWrite(led5, HIGH);
  digitalWrite(led6, HIGH);
  digitalWrite(led7,  HIGH);
  digitalWrite(led8, HIGH);
  digitalWrite(led9, HIGH);
  digitalWrite(led10, HIGH);
  delay(5000); // on observe une pause de 5 secondes
}
else if(choix == 6) //si ce choix est 5 voila ce qui va se passer ci-dessous
{
 digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, LOW);
  digitalWrite(led5, HIGH);
  digitalWrite(led6, HIGH);
  digitalWrite(led7,  HIGH);
  digitalWrite(led8, HIGH);
  digitalWrite(led9, HIGH);
  digitalWrite(led10, HIGH);
  delay(5000); // on observe une pause de 5 secondes
}
else if(choix == 7) //si ce choix est 6 voila ce qui va se passer ci-dessous
{
 digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);
  digitalWrite(led5, LOW);
  digitalWrite(led6, HIGH);
  digitalWrite(led7,  HIGH);
  digitalWrite(led8, HIGH);
  digitalWrite(led9, HIGH);
  digitalWrite(led10, HIGH);
  delay(5000); // on observe une pause de 5 secondes
}
else if(choix == 8) //si ce choix est 7 voila ce qui va se passer ci-dessous
{
 digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);
  digitalWrite(led5, HIGH);
  digitalWrite(led6, LOW);
  digitalWrite(led7,  HIGH);
  digitalWrite(led8, HIGH);
  digitalWrite(led9, HIGH);
  digitalWrite(led10, HIGH);
  delay(5000); // on observe une pause de 5 secondes
}
else if(choix == 9)// si ce choix est 8 voila ce qui va se passer ci-dessous
{
 digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);
  digitalWrite(led5, HIGH);
  digitalWrite(led6, HIGH);
  digitalWrite(led7, LOW);
  digitalWrite(led8, HIGH);
  digitalWrite(led9, HIGH);
  digitalWrite(led10,HIGH);
  delay(5000); // on observe une pause de 5 secondes
}
else if(choix == 10) //si ce choix est 9 voila ce qui va se passer ci-dessous
{
 digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);
  digitalWrite(led5, HIGH);
  digitalWrite(led6, HIGH);
  digitalWrite(led7, HIGH);
  digitalWrite(led8, LOW);
  digitalWrite(led9, HIGH);
  digitalWrite(led10, HIGH);
  delay(5000); // on observe une pause de 5 secondes
}
else if(choix == 11) //si ce choix est 10 voila ce qui va se passer ci-dessous
{
 digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);
  digitalWrite(led5, HIGH);
  digitalWrite(led6, HIGH);
  digitalWrite(led7,  HIGH);
  digitalWrite(led8, HIGH);
  digitalWrite(led9, LOW);
  digitalWrite(led10, HIGH);
  delay(5000); // on observe une pause de 5 secondes
}
else if(choix==12) //si ce choix est 11 voila ce qui va se passer ci-dessous
{
 digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);
  digitalWrite(led5, HIGH);
  digitalWrite(led6, HIGH);
  digitalWrite(led7, HIGH);
  digitalWrite(led8, HIGH);
  digitalWrite(led9, HIGH);
  digitalWrite(led10,LOW);
  delay(5000); // on observe une pause de 5 secondes
  // A la fin on recommence le processus
}
  
















    
}
