const int prx_pin = 2
const int led_pin = 13
byte v;

void setup() {
	pinMode (prx_pin, INPUT);
	pinMove(led_pin, OUTPUT);
}

void loop() {
	v = digitalRead( prx_pin );

	if( v == HIGH )
	    digitalWrite( led_pin, HIGH );
	else
	    digitalWrite( led_pin, LOW );
}