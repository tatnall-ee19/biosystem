int w;
int c;
w=0;
c=2;
int deer_delay;
deer_delay= 1000;
void setup() {
  // put your setup code here, to run once:

pinMode(2,INPUT);
pinMode(3,INPUT);
pinMode(6, OUTPUT);
pinMode(7, OUTPUT);
digitalWrite(2,LOW);
digitalWrite(3, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
int pin2;
pin2=(digitalRead(2));
int pin3;
pin3=(digitalRead(3));

if(pin2==HIGH){
  w+3;
  digitalWrite(6, HIGH);
  delay(1000);
  digitalWrite(6, LOW);
  
  delay(deer_delay);
  
  digitalWrite(7, HIGH);
  delay(1000);
  digitalWrite(7, LOW);
  
}
if(pin3==HIGH){
  c-1;
}
}
