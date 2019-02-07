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
int Deeer; // reading of Deer
int GStaate2; //reading of GState
int randnum; // 

void setup() {
  // put your setup code here , to run once:
  digitalWrite(Trees,HIGH);
  digitalWrite(GState1,HIGH);
  pinMode(Deer,INPUT);
  pinMode(Trees,OUTPUT);
  pinMode(GWaving,OUTPUT);
  pinMode(GState1,OUTPUT);
  pinMode(GState2,OUTPUT);
  pinMode(Wind,OUTPUT);
  pinMode(WindSound,OUTPUT);
  pinMode(Sobir,OUTPUT);
  pinMode(River,OUTPUT);
  pinMode(Smani,OUTPUT);
}
void loop() {
  // put your main code here , to run repeatedly:
  Serial.begin(9600);
  Serial.println(randnum);
  randnum = rand() % 100; // generates randnum in the range 0 to 99
  if (randnum<49){
    randfunc();
  }
  delay(500);
  digitalWrite(Wind,LOW);
  digitalWrite(WindSound,LOW);
  digitalWrite(GWaving,LOW);
  Deeer=digitalRead(Deer);
  delay(200);
  if (Deeer==HIGH){
    digitalWrite(GState2,HIGH);
    digitalWrite(GState1,LOW);
    }
  GStaate2=digitalRead(GState2);
  delay(200);
  if (GStaate2==HIGH){
    digitalWrite(River,HIGH);
    digitalWrite(Smani,HIGH);
    digitalWrite(Sobir,HIGH);
    }
  }
void randfunc() {
    digitalWrite(Wind,HIGH);
    digitalWrite(WindSound,HIGH);
    digitalWrite(GWaving,HIGH);
}
