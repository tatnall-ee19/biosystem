//Initial: Few Grass, Trigger
//Trigger1: More Grass, Delay, Signal River, Signal Small Animals, Delay, Trigger
//Random Waving
//Sensor Waving
int Trees=2; // static , not essential to chain
int GWaving=3; // not essential to chain
int GState1=4;
int Deer=5;
int GState2=6;
int Wind=7; // not essential to chain
int WindAudio=8; // audio
int River=9;
int Sobir=10; 
int Smani=11;
int Deeer; // variable of Deer
void setup() {
  // put your setup code here , to run once:
  pinMode(Deer,INPUT);
  pinMode(Sobir,OUTPUT);
  pinMode(River,OUTPUT);
  pinMode(Smani,OUTPUT);
  pinMode(Smani,LOW);
  pinMode(GState2,LOW);
  pinMode(River,LOW);
  pinMode(Sobir,LOW);
  pinMode(GWaving,HIGH);
  pinMode(GState1,HIGH);
  pinMode(Trees,HIGH);
  pinMode(Wind,HIGH);
  pinMode(WindAudio,HIGH);
}
void loop() {
  // put your main code here , to run repeatedly:
  digitalWrite(Trees,HIGH);
  digitalWrite(Wind,HIGH);
  digitalWrite(WindAudio,HIGH);
  digitalWrite(GWaving,HIGH);
  digitalWrite(GState1,HIGH);
  Deeer=digitalRead(Deer);
  delay(10000);
  digitalWrite(Deeer,HIGH);
  if (Deeer==HIGH){
    digitalWrite(GState2,HIGH);
    digitalWrite(GState1,LOW);
    }
  delay(10000);
  if (GState2==HIGH){
    digitalWrite(River,HIGH);
    digitalWrite(Smani,HIGH);
    digitalWrite(Sobir,HIGH);
    }
  }
