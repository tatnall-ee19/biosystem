int w;
int c;
int deer_delay = 1000;
void setup() {
  // put your setup code here, to run once:

  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(6, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(10, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  w = 0;
  c = 1;

  int pin2 = digitalRead(2);
  int pin3 = digitalRead(3);
  int pin4 = digitalRead(4);

  if (pin2 == HIGH) {
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(6, HIGH);
    delay(1000);
    digitalWrite(6, LOW);

    delay(deer_delay);

    digitalWrite(11, HIGH);
    delay(1000);
    digitalWrite(11, LOW);


    w + 2;
  }
  if (pin3 == HIGH) {
    c - 1;
    digitalWrite(10, LOW);
  }
  delay(500);
  if (w >= 2) {
    int randNumb = random(0, 50);
    if (randNumb < 2) {
      digitalWrite(6, HIGH);
      delay(1000);
      digitalWrite(6, LOW);
    }
  }
}
