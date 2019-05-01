

void setup() {
	pinMode(11, OUTPUT);
}
void loop() {
	int nivelIluminare = analogRead(0);
	if (nivelIluminare < 300) {
		digitalWrite(11, HIGH);} else {
		digitalWrite(11, LOW);
	}
}
