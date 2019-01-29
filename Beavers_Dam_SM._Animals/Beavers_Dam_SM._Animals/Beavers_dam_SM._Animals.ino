///////////////////////////////////////////////////////////////////
//intial: few small animals, no bears
//T1: add bears, dam, Send river signal
//T2: more small animals, Send songbird signal
//T3: more SA, send SA audio, send bears, Send birds of Prey
//random SA audio after T3 only
///////////////////////////////////////////////////////////////////
int input_pin1 = 2;
int input_pin2 = 3;
int input_pin3 = 4;
int reset_pin = 5;
int final_output = 6;
int initial_beavers = 7;
int create_SA = 8;
int dam_genesis = 9;
int first_river_output = 10; //on my arduino this pin doesn't work
int SA_primary_addition = 11;
int songbird_output = 12;
int SA_secondary_addition =13;
int Bears_signal = 0;
int BOP_signal = 1;
int SA_audio = A0; //what

void setup() {
pinMode(input_pin1,INPUT);
pinMode(input_pin2,INPUT);
pinMode(input_pin3,INPUT);
pinMode(final_output,OUTPUT);
pinMode(initial_beavers,OUTPUT);
pinMode(create_SA,OUTPUT);
pinMode(SA_primary_addition,OUTPUT);
pinMode(songbird_output,OUTPUT);
pinMode(SA_secondary_addition,OUTPUT);
pinMode(SA_audio,OUTPUT);
pinMode(Bears_signal,OUTPUT);
pinMode(BOP_signal,OUTPUT);
pinMode(first_river_output,OUTPUT);
pinMode(dam_genesis,OUTPUT);
pinMode(reset_pin,INPUT);
creation_state();

}

void loop() {
  initial_add();
  secondary_add();
  tertiary_add();
  random_audio();
  akira();
  reset();
}

void creation_state(){
  digitalWrite(create_SA,HIGH);
  digitalWrite(initial_beavers,LOW);
  digitalWrite(dam_genesis,LOW);
  digitalWrite(first_river_output,LOW);
  digitalWrite(SA_primary_addition,LOW);
  digitalWrite(songbird_output,LOW);
  digitalWrite(SA_secondary_addition,LOW);
  digitalWrite(SA_audio,LOW);
  digitalWrite(Bears_signal,LOW);
  digitalWrite(BOP_signal,LOW);
  digitalWrite(SA_audio,LOW);
  
}

void initial_add(){
  if(digitalRead(input_pin1) == HIGH){
    digitalWrite(initial_beavers,HIGH);
    digitalWrite(dam_genesis,HIGH);
    digitalWrite(first_river_output,HIGH);
  }
}

void secondary_add(){
  if(digitalRead(input_pin2) == HIGH){
    digitalWrite(SA_primary_addition,HIGH);
    digitalWrite(songbird_output,HIGH);
  }
}

void tertiary_add(){
  if(digitalRead(input_pin3) == HIGH){
    digitalWrite(SA_secondary_addition,HIGH);
    digitalWrite(SA_audio,HIGH);
    digitalWrite(Bears_signal,HIGH);
    digitalWrite(BOP_signal,HIGH);
  }
}

void random_audio(){
  if(digitalRead(input_pin3) == HIGH){
    delay(10000);
    digitalWrite(SA_audio,HIGH);
  }
}

void akira(){
  delay(30000);
  creation_state();
}

void reset(){
  if(digitalRead(reset_pin) == HIGH){
    digitalWrite(create_SA,LOW);
    digitalWrite(initial_beavers,LOW);
    digitalWrite(dam_genesis,LOW);
    digitalWrite(first_river_output,LOW);
    digitalWrite(SA_primary_addition,LOW);
    digitalWrite(songbird_output,LOW);
    digitalWrite(SA_secondary_addition,LOW);
    digitalWrite(SA_audio,LOW);
    digitalWrite(Bears_signal,LOW);
    digitalWrite(BOP_signal,LOW);
    digitalWrite(SA_audio,LOW);
  }
}
//akira should return MY arduino to it's initial state, after
//3 minutes...
