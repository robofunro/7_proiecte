
int pinLed=10;

void setup() {
  Serial.begin(9600);
  pinMode(pinLed, OUTPUT);
}
void loop() {
  int nivelIluminare = analogRead(0);
  int luminozitate= map(nivelIluminare, 0, 1023, 255, 0);
  analogWrite(pinLed, luminozitate);
  
}
