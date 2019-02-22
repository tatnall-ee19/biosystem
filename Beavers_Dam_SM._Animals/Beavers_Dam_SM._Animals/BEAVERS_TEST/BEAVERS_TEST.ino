//intial: few small animals, no bears
//T1: add bears, dam, Send river signal
//T2: more small animals, Send songbird signal
//T3: more SA, send SA audio, send bears, Send birds of Prey
//random SA audio after T3 only

int input_pin1 = 2;
int input_pin2 = 3;
int input_pin3 = 4;
int reset_pin = 5;
int initial_beavers = 6;
int create_SA = 7;
int dam_genesis = 8;
int first_river_output = 9;
int SA_primary_addition = 10; 
int songbird_output = 11;
int SA_secondary_addition = 12;
int Bears_signal = 13;
int BOP_signal = A0;
int SA_audio = A1;
int randum;
bool trigger1 = 0;
bool trigger2 = 0;
bool trigger3 = 0;

void setup() {
pinMode(input_pin1,INPUT);
pinMode(input_pin2,INPUT);
pinMode(input_pin3,INPUT);
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
  if(digitalRead(input_pin1) == HIGH){
  initial_add();
  }
  if(digitalRead(input_pin2) == HIGH){
    if(trigger1 == false){
      initial_add();
    }
    secondary_add();
  }
  if(digitalRead(input_pin3) == HIGH){
    if(trigger1 == false){
      initial_add();
    }
    if(trigger2 == false){
      secondary_add();
    }
    tertiary_add();
    randumb();
  }
 delay(10);
}

void creation_state(){
  digitalWrite(create_SA,HIGH);
}

void initial_add(){
    digitalWrite(initial_beavers,HIGH);
    digitalWrite(dam_genesis,HIGH);
    digitalWrite(first_river_output,HIGH);
    if(digitalRead(input_pin1 == HIGH)){
      trigger1 == true;
    }
}

void secondary_add(){
    digitalWrite(SA_primary_addition,HIGH);
    digitalWrite(songbird_output,HIGH);
    if(digitalRead(input_pin2) == HIGH){
      trigger2 == true;
    }
}

void tertiary_add(){
    digitalWrite(SA_secondary_addition,HIGH);
    digitalWrite(Bears_signal,HIGH);
    digitalWrite(BOP_signal,HIGH);
    if(digitalRead(input_pin3) == HIGH){
      trigger3 == true;
    }
}

void randumb(){
  digitalWrite(SA_audio,LOW);
  delay(random(100000,120000));
  digitalWrite(SA_audio,HIGH);
  delay(1000);
  digitalWrite(SA_audio,LOW);
}
