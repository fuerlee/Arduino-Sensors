void setup()
{
	pinMode(0, INPUT);
	digitalWrite(0, HIGH);
	Serial.begin(9600);
}

void loop()
{
	int val = analogRead(0);
	Serial.println (val);
}