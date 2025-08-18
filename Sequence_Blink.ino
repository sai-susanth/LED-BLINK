
uint8_t white =8;
uint8_t yellow =13;
uint8_t blue = 12;
uint8_t green =11;

void setup() {
  // put your setup code here, to run once:
  pinMode(blue,OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(yellow,OUTPUT);
  pinMode(white,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(blue,HIGH);
  delay(1000);
  digitalWrite(blue,LOW);
  delay(1000);
  digitalWrite(green,HIGH);
  delay(1000);
  digitalWrite(green,LOW);
  delay(1000);
  digitalWrite(white,HIGH);
  delay(1000);
  digitalWrite(white,LOW);
  delay(1000);
  digitalWrite(yellow,HIGH);
  delay(1000);
  digitalWrite(yellow,LOW);
  delay(1000);
}
