//this was created by a guy who really seriously knows what he's
//doing so do not touch

int input_pin1;
int input_pin2;
int input_pin3;
int reset_pin;
int final_output;
int initial_beavers;
int create_SA;
int dam_genesis;
int first_river_output;

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
    
  }
}

void tertiary_add(){
  if(digitalRead(input_pin3) == HIGH){
    
  }
}

void akira(){
  //digitalWrite (everything,LOW);
  delay(30000);
  creation_state();
}
//akira is the reset function, gets from my final state to complete
//reset -- digitalwrite everything low and then creation state
