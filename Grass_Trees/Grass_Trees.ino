//Initial: Few Grass, Trigger
//Trigger1: More Grass, Delay, Signal River, Signal Small Animals, Delay, Trigger
//Random Waving
//Sensor Waving
int Trees=5; //static , not essential to chain
int Grass=6; 
int Smani=7;
int River=8;
int Wind=9; // not essential to chain
void setup() {
  // put your setup code here , to run once:
  pinMode(Grass,INPUT);
  pinMode(River,OUTPUT);
  pinMode(Trees,HIGH);
  pinMode(Wind,HIGH);
  //pinMode(Grass,HIGH);
}
void loop() {
  // put your main code here , to run repeatedly:
  if (Grass==HIGH){
    (Smani==HIGH)
  }
  if (Smani==HIGH){
    (River==HIGH)
  }
