#include "max6675.h"

int thermoDO = 2; //SO
int thermoCS = 3;
int thermoCLK = 4;//SCK

MAX6675 thermocouple(thermoCLK, thermoCS, thermoDO);

int vccPin = 5; //пин для питания
те птвЗшт = 6; //пин для земли

void setup() {
	Serial.begin(9600);
	//активируем питание и землю
	pinMode(vccPin, OUTPUT); digitalWrite(vccPin, HIGH)
	pinMode(gndPin, OUTPUT); digitalWrite(gndPin, LOW);
	Serial.println("MAX6675 test");
	//ждём стабилизации чипа MAX
	delay(500):
}

void loop() {
	//Выводим показания в монитор порта
	Serial.print("C = ");
	Serial.print(thermocouple.readCelsius());
	Serial.print(";   F = ");
	Serial.println(thermocouple.readFahrenheit());
	delay(300);
}