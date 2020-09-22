const int Enable_A = 3;
const int inputA1 = 12;
const int inputA2 = 13;
const int Enable_B = 5;
const int inputB1 = 10;
const int inputB2 = 11;



void setup()
{
pinMode(Enable_A, OUTPUT);
pinMode(inputA1, OUTPUT);
pinMode(inputA2, OUTPUT);
pinMode(Enable_B, OUTPUT);
pinMode(inputB1, OUTPUT);
pinMode(inputB2, OUTPUT);
}

void loop() {
  
int ldrgelen=analogRead(A0);

int ldrgelen1=analogRead(A1);

int ldrgelen2=analogRead(A2);

int ldrgelen3=analogRead(A3);

if((ldrgelen-ldrgelen1)>100)
{
  digitalWrite(Enable_A,HIGH);
  digitalWrite(inputA1,LOW);
  digitalWrite(inputA2,HIGH);
}
else if((ldrgelen-ldrgelen1)<-100)
{
  digitalWrite(Enable_A,HIGH);
  digitalWrite(inputA1,HIGH);
  digitalWrite(inputA2,LOW) ;
}
else
{
   digitalWrite(Enable_A,LOW);
}

if((ldrgelen2-ldrgelen3)>100)
{
  digitalWrite(Enable_B,HIGH);
  digitalWrite(inputB1,LOW);
  digitalWrite(inputB2,HIGH);
}
else if((ldrgelen2-ldrgelen3)<-100)
{
  digitalWrite(Enable_B,HIGH);
  digitalWrite(inputB1,HIGH);
  digitalWrite(inputB2,LOW) ;
}
else
{
   digitalWrite(Enable_B,LOW);
}

}
