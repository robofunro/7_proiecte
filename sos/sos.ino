
// SOS cu Arduino

// Pinul utilizat pentru SOS
int ledPin = 10;

void setup() {
  //Seteaza pinul in modul OUTPUT.
  pinMode(ledPin, OUTPUT);
}

void loop() {

  flash(200); flash(200); flash(200); // S
  delay(300); // asteapta 300 milisecunde
  flash(500); flash(500); flash(500); // O
  flash(200); flash(200); flash(200); // S
  delay(2000);

}

void flash(int duration)
{
  digitalWrite(ledPin, HIGH);
  delay(duration);
  digitalWrite(ledPin, LOW);
  delay(duration);
}
