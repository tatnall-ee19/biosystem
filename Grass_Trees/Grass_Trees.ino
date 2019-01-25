//Initial: Few Grass, Trigger
//Trigger1: More Grass, Delay, Signal River, Signal Small Animals, Delay, Trigger
//Random Waving
//Sensor Waving
int Grass=5;
int Trees=6; //static , not essential to chain
int Smani=7;
int River=8; // not essential to chain
int Wind=9; 
void setup() {
  // put your setup code here, to run once:
  pinMode(10,INPUT)
  pinMode(Grass,INPUT);
  pinMode(Wind,OUTPUT);
  digitalWrite(River,HIGH);
  delay(1000);
  digitalWrite(River,LOW);
}
void loop() {
  // put your main code here, to run repeatedly:
  void(* resetFunc) (void) = 0;//declare reset function at address 0
  pinMode(5,HIGH)
}
