
#define SECOND_PIN  10
#define MINUTE_PIN  9
#define HOUR_PIN  8


long seconds = 0;
long minutes = 0;
long hours = 0;



void setup() {

  Serial.begin(9600);
  pinMode(SECOND_PIN, OUTPUT);
  pinMode(MINUTE_PIN, OUTPUT);
  pinMode(HOUR_PIN, OUTPUT);




}
void loop() {

  long s = millis() / 1000;

  if (s > seconds) {
    seconds = s;
    digitalWrite(SECOND_PIN, HIGH);

    long m = seconds / 60;
    if (m > minutes) {
      minutes = m;
      digitalWrite(MINUTE_PIN, HIGH);

      long h = minutes / 60;
      if (h > hours) {
        hours = h;
        digitalWrite(HOUR_PIN, HIGH);
      }

    }

    delay(100);
    digitalWrite(SECOND_PIN, LOW);
    digitalWrite(MINUTE_PIN, LOW);
    digitalWrite(HOUR_PIN, LOW);



  }







}
