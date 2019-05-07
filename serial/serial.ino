

int ledPin=10;

void setup() {

  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}
void loop() {

  while (Serial.available() > 0) {

    int a = Serial.parseInt();

    if (Serial.read() == '\n') {
      analogWrite(ledPin, a);
    }


  }

}
