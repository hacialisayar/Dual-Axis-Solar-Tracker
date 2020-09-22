const byte ldr1=A0;
const byte ldr2=A1;
const int Enable_A = 9;
const int inputA1 = 12;
const int inputA2 = 13;
int i;
int j;
int k;

void setup()
{
pinMode(Enable_A, OUTPUT);
pinMode(inputA1, OUTPUT);
pinMode(inputA2, OUTPUT);
Serial.begin(9600);
}
void loop()
{

i=analogRead(ldr1);
j=analogRead(ldr2);
int yeni_deger=map(i,0,1023,0,255); 
int yeni_deger1=map(j,0,1023,0,255);
k=abs(yeni_deger-yeni_deger1);
Serial.println(k); 

if((i-j)>30)
{
  digitalWrite(Enable_A,k);
  digitalWrite(inputA1,LOW);
  digitalWrite(inputA2,HIGH);
}
else if((i-j)<-30)
{
  digitalWrite(Enable_A,k);
  digitalWrite(inputA1,HIGH);
  digitalWrite(inputA2,LOW) ;
}
else
{
   digitalWrite(Enable_A,LOW);
}  
 
}
