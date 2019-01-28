//this was created by a guy(me) who really seriously knows what he's
//doing so do not touch
///////////////////////////////////////////////////////////////////
//intial: few small animals, no bears
//T1: add bears, dam, Send river signal
//T2: more small animals, Send songbird signal
//T3: more SA, send SA audio, send bears, Send birds of Prey
//random SA audio after T3 only
///////////////////////////////////////////////////////////////////
int input_pin1;
int input_pin2;
int input_pin3;
int reset_pin;
int final_output;
int initial_beavers;
int create_SA;
int dam_genesis;
int first_river_output;
int SA_primary_addition;
int songbird_output;
int SA_secondary_addition;
int SA_audio;
int Bears_signal;
int BOP_signal;

void setup() {
pinMode(input_pin1,INPUT);
pinMode(input_pin2,INPUT);
pinMode(input_pin3,INPUT);
pinMode(final_output,OUTPUT);
pinMode(initial_beavers,OUTPUT);
pinMode(first_river_output,HIGH);
pinMode(dam_genesis,OUTPUT);
pinMode(reset_pin,INPUT);
creation_state();

}

void loop() {
  initial_add();
  secondary_add();
  tertiary_add();
  akira();

}

void creation_state(){
  digitalWrite(create_SA,HIGH);
  
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

void akira(){
  //digitalWrite (everything,LOW);
  delay(30000);
  creation_state();
}
//akira is the reset function, gets from my final state to complete
//reset -- digitalwrite everything low and then creation state
