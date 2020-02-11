int analogInput = A5;
int analogINput = A0;
double V1=0;


double V3=0;
double V5=0;
void setup() {

Serial.begin(9600);
pinMode(9, OUTPUT);
pinMode(analogInput,INPUT);
pinMode(analogINput,INPUT);
}

void loop() {

V1=analogRead(analogInput)*5/1023;

V3=analogRead(analogINput)*5/1023;

V5=V1-V3;
Serial.print(V5);
Serial.print("                 ");
Serial.println(V5);

if (V5 < 0.10){
  digitalWrite(9, HIGH);
  }
else{
  digitalWrite(9, LOW);
  }
delay(1000);

}
