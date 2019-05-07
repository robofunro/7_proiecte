
#define RED_PIN  10
#define GRREN_PIN  9
#define YELLOW_PIN  8

int sleep = 500;


void setup() {

  Serial.begin(9600);
  pinMode(RED_PIN, OUTPUT);
  pinMode(GRREN_PIN, OUTPUT);
  pinMode(YELLOW_PIN, OUTPUT);
}
void loop() {

  while (Serial.available() > 0) {

    int a = Serial.parseInt();

    if (Serial.read() == '\n') {
      sleep = a;
    }

  }

  digitalWrite(RED_PIN,HIGH);
  digitalWrite(GRREN_PIN,HIGH);
  digitalWrite(YELLOW_PIN,HIGH);
  delay(sleep);
  digitalWrite(RED_PIN,LOW);
  digitalWrite(GRREN_PIN,LOW);
  digitalWrite(YELLOW_PIN,LOW);
  delay(sleep);
  
  

}
