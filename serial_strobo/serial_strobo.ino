
int redPin = 10;
int greenPin = 9;
int yellowPin = 8;

int sleep = 0;


void setup() {

  Serial.begin(9600);
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
}
void loop() {

  while (Serial.available() > 0) {

    int a = Serial.parseInt();

    if (Serial.read() == '\n') {
      sleep = a;
    }

  }

  digitalWrite(redPin,HIGH);
  digitalWrite(greenPin,HIGH);
  digitalWrite(yellowPin,HIGH);
  delay(sleep);
  digitalWrite(redPin,LOW);
  digitalWrite(greenPin,LOW);
  digitalWrite(yellowPin,LOW);
  delay(sleep);
  
  

}
