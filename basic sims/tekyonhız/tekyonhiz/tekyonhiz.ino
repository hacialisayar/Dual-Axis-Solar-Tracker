const int inputA1 = 12;
const int inputA2 = 13;
int ldr1 = A0;
int ldr2 = A1;
int motor1 = 9;
int i; 


void setup()
{
pinMode(inputA1, OUTPUT);
pinMode(inputA2, OUTPUT);
pinMode(A0, INPUT);
pinMode(9, OUTPUT);
}
void loop()
{
  i = analogRead(ldr1)-analogRead(ldr2); 
  
  if(i<30)
{
  analogWrite(motor1, map(i, 0, 1023, 0, 255)); 
  digitalWrite(inputA1,LOW);
  digitalWrite(inputA2,HIGH);
} 
  else if(i>-30)
{  
  analogWrite(motor1, map(i, 0, 1023, 0, 255)); 
  digitalWrite(inputA1,LOW); 
  digitalWrite(inputA2,HIGH);
}  
  else
{  
  digitalWrite(motor1,LOW)
} 
}
