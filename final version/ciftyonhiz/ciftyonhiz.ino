int inputA1 = 12;
int inputA2 = 13;
int inputB1 = 7;
int inputB2 = 8;
int i=0;
int j=0;


void setup()
{
pinMode(9, OUTPUT);
pinMode(inputA1, OUTPUT);
pinMode(inputA2, OUTPUT);
pinMode(10, OUTPUT);
pinMode(inputB1, OUTPUT);
pinMode(inputB2, OUTPUT);
}

void loop() {
  
int ldrgelen=analogRead(A0);

int ldrgelen1=analogRead(A1);

int ldrgelen2=analogRead(A2);

int ldrgelen3=analogRead(A3);

i=abs(ldrgelen-ldrgelen1);
j=abs(ldrgelen2-ldrgelen3);


if((ldrgelen-ldrgelen1)>100)
{
  analogWrite(10, map(i, 0, 1024, 0, 255));
  digitalWrite(inputA1,LOW);
  digitalWrite(inputA2,HIGH);
}
else if((ldrgelen-ldrgelen1)<-100)
{
  analogWrite(10, map(i, 0, 1024, 0, 255));
  digitalWrite(inputA1,HIGH);
  digitalWrite(inputA2,LOW) ;
}
else
{
   digitalWrite(10,LOW);
}

if((ldrgelen2-ldrgelen3)>100)
{
  analogWrite(9, map(j, 0, 1024, 0, 255));
  digitalWrite(inputB1,LOW);
  digitalWrite(inputB2,HIGH);
}
else if((ldrgelen2-ldrgelen3)<-100)
{
  analogWrite(9, map(j, 0, 1024, 0, 255));
  digitalWrite(inputB1,HIGH);
  digitalWrite(inputB2,LOW) ;
}
else
{
   digitalWrite(9,LOW);
}
delay(30000);
}
