const int Enable_A = 9;
const int inputA1 = 2;
const int inputA2 = 3;


void setup()
{
pinMode(Enable_A, OUTPUT);
pinMode(inputA1, OUTPUT);
pinMode(inputA2, OUTPUT);

}

void loop() {
  
int ldrgelen=analogRead(A0);

int ldrgelen1=analogRead(A1);

if((ldrgelen-ldrgelen1)>2)
{
  digitalWrite(Enable_A,HIGH);
  digitalWrite(inputA1,LOW);
  digitalWrite(inputA2,HIGH);
}
else if((ldrgelen-ldrgelen1)<-2)
{
  digitalWrite(Enable_A,HIGH);
  digitalWrite(inputA1,HIGH);
  digitalWrite(inputA2,LOW) ;
}
else
{
   digitalWrite(Enable_A,LOW);
}

}
