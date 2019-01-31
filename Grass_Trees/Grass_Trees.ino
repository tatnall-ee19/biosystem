//Initial: Few Grass, Trigger
//Trigger1: More Grass, Delay, Signal River, Signal Small Animals, Delay, Trigger
//Random Waving
//Sensor Waving
int Trees=5; //static , not essential to chain
int GState1=6;
int GState2=7; 
int Smani=8;
int GState3=9;
int River=10;
int Wind=11; // not essential to chain
int WindAudio=12; // audio
void setup() {
  // put your setup code here , to run once:
  pinMode(Smani,INPUT);
  pinMode(River,OUTPUT);
  pinMode(GState2,LOW);
  pinMode(Smani,LOW);
  pinMode(GState3,LOW);
  pinMode(River,LOW);
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
  digitalWrite(GState2,HIGH);
  digitalWrite(GState1,HIGH);
  digitalRead(Smani);
  delay(10000);
  if (GState1==HIGH){
    digitalWrite(Smani,HIGH);
    }
  delay(10000);
  if (Smani==HIGH){
    digitalWrite(GState3,HIGH);
    digitalWrite(GState1,LOW);
    }
  delay(10000);
  if (GState3==HIGH){
    digitalWrite(River,HIGH);
    }
  }
