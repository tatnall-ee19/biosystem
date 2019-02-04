//Initial: Few Grass, Trigger
//Trigger1: More Grass, Delay, Signal River, Signal Small Animals, Delay, Trigger
//Random Waving
//Sensor Waving
int Trees=2; // static , not essential to chain
int GWaving=3; // motion
int GState1=4;
int Deer=5;
int GState2=6;
int Wind=7; // not essential to chain
int WindSound=8; // audio
int River=9;
int Sobir=10; //Song Birds
int Smani=11; //Small Animals
int Deeer; // variable of Deer
void setup() {
  // put your setup code here , to run once:
  digitalWrite(Trees,HIGH);
  digitalWrite(Wind,HIGH);
  digitalWrite(WindSound,HIGH);
  digitalWrite(GWaving,HIGH);
  digitalWrite(GState1,HIGH);
  pinMode(Trees,INPUT);
  pinMode(GWaving,INPUT);
  pinMode(GState1,INPUT);
  pinMode(Deer,INPUT);
  pinMode(GState2,INPUT);
  pinMode(Wind,INPUT);
  pinMode(WindSound,INPUT);
  pinMode(Sobir,OUTPUT);
  pinMode(River,OUTPUT);
  pinMode(Smani,OUTPUT);
}
void loop() {
  // put your main code here , to run repeatedly:
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
