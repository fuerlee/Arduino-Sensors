const int movPin = 2;
const int relPin = 3;

void setup() {
	Serial.begin(9600);
	pinMode (movPin, INPUT);
	pinMode (relPin, OUTPUT);
}

void loop() {
	int val = digitalRead(movPin);
	if (val)
	    digital Write(relPin, HIGH);
	else
	    digitalWrite (relPin, LOW);
}