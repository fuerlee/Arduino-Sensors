
#include <Wire.h> // подключаем библиоотеку I2C
#include <BH1750.h> // подключаем библиотеку датчика 

BH1750 lightmeter; // объявляем объект lightMeter

void setup() {
	Serial.begin(9600); // инициализация послед. порта
	lightMeter.begin(); //инициализация датчика BH1750
}

void loop() {
	// считываем показания с BH1750
	uint16_t lux = lightMeter.readLightLevel();
	//выводим показания в послед.порт:
	Serial.println(String(lux) + "lx");
	delay(100); //задержка 100 мсек
}