int inputA1 = 12;
int inputA2 = 13;
int pot = A0;
int potDeger; 


void setup()
{
pinMode(inputA1, OUTPUT);
pinMode(inputA2, OUTPUT);
pinMode(A0, INPUT);
pinMode(10, OUTPUT);
}
void loop()
{
  potDeger = analogRead(pot); 
  analogWrite(10, map(potDeger ,0 , 1024 ,0 ,255)); 
  digitalWrite(inputA1,LOW);
  digitalWrite(inputA2,HIGH);
}
