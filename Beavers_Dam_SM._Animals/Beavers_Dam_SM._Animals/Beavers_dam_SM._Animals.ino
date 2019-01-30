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
int final_output; //not sure why I need this, so i won't give #
int initial_beavers = 6;
int create_SA = 7;
int dam_genesis = 8;
int first_river_output = 9;
int SA_primary_addition = 10; //on my arduino this pin doesn't work
int songbird_output = 11;
int SA_secondary_addition = 12;
int Bears_signal = 13;
int BOP_signal = 0; //what
int SA_audio = 1; //what

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
  reset();
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

void random_audio(){
  if(digitalRead(input_pin3) == HIGH){
    delay(10000);
    digitalWrite(SA_audio,HIGH);
    delay(1000);
    digitalWrite(SA_audio,LOW);
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
