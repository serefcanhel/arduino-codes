
  int dir1pin = 2;
  int dir2pin = 3;
void setup() {
  pinMode(6,OUTPUT);
  pinMode(0, INPUT); 
  Serial.begin(9600);
  pinMode(dir1pin,OUTPUT);
  pinMode(dir2pin,OUTPUT);
}

void loop() 
{
     
     
     double analogValue = analogRead(0);
     Serial.println(analogValue*5/1023);
     double motorValue = analogValue*255/1023;
     delay(10);

     digitalWrite(dir1pin, HIGH);
     digitalWrite(dir2pin, LOW);
     analogWrite(6, motorValue);
  
     
}
