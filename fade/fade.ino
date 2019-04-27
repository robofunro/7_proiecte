


int led = 10;           // Pinul la care se va conecta ledul . Trebuie sa alegeti un pin care suporta PWM. Pe Arduino UNO puteti sa alegeti unul din pinii 9,10,11,3,5,6
int brightness = 0;    // luminozitatea
int fadeFactor = 5;    // factorul de schimbarea luminozitatii

void setup() {
  pinMode(led, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {

  // Seteaza luminozitatea ledului
  analogWrite(led, brightness);

  // Schimba gradul de luminozitate pentru urmatoarea aprindere
  brightness = brightness + fadeFactor;

  // In cazul in care intervalul (0,255) este depasit se inverseaza directia
  if (brightness <= 0 || brightness >= 255) {
    fadeFactor = -1 * fadeFactor;
  }

  // Putina pauza
  delay(30);
}
