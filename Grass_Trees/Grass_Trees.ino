
//Initial: Few Grass, Trigger
//Trigger1: More Grass, Delay, Signal River, Signal Small Animals, Delay, Trigger
//Random Waving
//Sensor Waving
#include <FastLED.h>
#define NUM_LEDS 50
#define DATA_PIN 8
CRGB leds[50];
int hues[50];
int randNum2;
int Trees=4; // static , not essential to chain
int GWaving=5; // motion
int GState1=6;
int GState2=6; // shared pin?
int Deer=7;
int RGBe=8;
int Wind=9; // not essential to chain
int WindSound=10; // audio
int River=11;
int Sobir=12; // song birds
int Smani=13; // small animals
int Deeer; // reading of deer
int GStaate2; // reading of gstate
int randnum; // 

void setup() {
  // put your setup code here , to run once:
  FastLED.addLeds<WS2811, DATA_PIN, RGB>(leds, NUM_LEDS);  
  Serial.begin(9600);
  // if analog input pin 0 is unconnected, random analog
  // noise will cause the call to randomSeed() to generate
  // different seed numbers each time the sketch runs.
  // randomSeed() will then shuffle the random function.
  randomSeed(analogRead(0));
  for (int i=0; i<50; i++) {
   hues[i] = random(70,110);
    }
  digitalWrite(Trees,HIGH);
  digitalWrite(GState1,HIGH);
  pinMode(Deer,INPUT);
  pinMode(Trees,OUTPUT);
  pinMode(GWaving,OUTPUT);
  pinMode(GState1,OUTPUT);
  pinMode(RGBe,OUTPUT);
  //pinMode(GState2,OUTPUT);
  pinMode(Wind,OUTPUT);
  pinMode(WindSound,OUTPUT);
  pinMode(Sobir,OUTPUT);
  pinMode(River,OUTPUT);
  pinMode(Smani,OUTPUT);
}
void loop() {
  // put your main code here , to run repeatedly:
  for(int i=0; i<50; i++){
   randNum2 = random(-1,2);
   Serial.println(randNum2);
   hues[i]=randNum2+hues[i];
   leds[i]=CHSV(hues[i],255,255);
  }
  FastLED.show();
  delay(500);Serial.begin(9600);
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
