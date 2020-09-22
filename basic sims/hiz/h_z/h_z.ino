const int in1Pin=12;
const int in2Pin=13;
const int enableA=9;

const int hiz=50;

void setup() {
  pinMode(in1Pin,OUTPUT);
  pinMode(in2Pin,OUTPUT);
  pinMode(enableA,OUTPUT);
  
}
void loop() 
{
analogWrite(enableA , hiz);
digitalWrite(in1Pin,LOW);
digitalWrite(in2Pin,HIGH);

}
