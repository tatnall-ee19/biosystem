int D = 550;
int pin3 = 3;
int pin12 = 12;

void setup() {
  // put your setup code here, to run once
Serial.begin(9600);
pinMode(2,INPUT); //intial
pinMode(4,OUTPUT);//B OF P AUDIO
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
pinMode(7,OUTPUT);
pinMode(8,OUTPUT);  //SB AUDIO
pinMode(9,OUTPUT);
pinMode(10,OUTPUT);
pinMode(11,OUTPUT);
pinMode(pin12,INPUT); //Trig 2 input, adD B oF P, Send B of P audio 
pinMode(pin3,INPUT); //Trig 1 input, add songbird, send SB audio 
digitalWrite(pin3,LOW);
digitalWrite(pin12,LOW);

}

void loop() {
  // put your main code here, to run repeatedly:
int randNumb = random(0, 20);
Serial.println(randNumb);

if (digitalRead(pin3) == LOW and digitalRead(pin12) == LOW){
  if (randNumb < 4){
    Serial.println("left");
    left();
    delay(1000);
    Serial.println("right");
    right();
  }
}

if (digitalRead(pin3) == HIGH){
  digitalWrite(8,HIGH);
  delay(D);
  digitalWrite(8,LOW);
  if (randNumb < 8){
    Serial.println("T1left");
    left();
    Serial.println("T1right");
    right();
  }
}
if (digitalRead(pin12) == HIGH){
  Serial.println("Trig2");
  Trig2();
}
}


void left(){

    digitalWrite(9,HIGH);
    delay(D);
    digitalWrite(9,LOW);
    digitalWrite(10,HIGH);
    delay(D);
    digitalWrite(10,LOW);
    digitalWrite(11,HIGH);
    delay(D);
    digitalWrite(11,LOW);
    delay(D);
   
}

void right(){

    digitalWrite(11,HIGH);
    delay(D);
    digitalWrite(11,LOW);
    digitalWrite(10,HIGH);
    delay(D);
    digitalWrite(10,LOW);
    digitalWrite(9,HIGH);
    delay(D);
    digitalWrite(9,LOW);
    delay(D);
   
}


void Trig2(){

    digitalWrite(4,HIGH);  //B OF P Audio
    digitalWrite(6,HIGH);
    delay (D);
    digitalWrite(6,LOW);

}
