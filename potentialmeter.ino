int potPin=A0;
int ledPin=6;
int ledPin_2=5;
void setup() {
  Serial.begin(9600);
  Serial.print("output value : ");
  pinMode(ledPin, OUTPUT);

}

void loop() {
  double value=analogRead(potPin);
  Serial.println(value*5/1023);
  delay(100);
  analogWrite(ledPin, value*255/1023);

}
