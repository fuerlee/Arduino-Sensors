const int trigPin = 12;
const int echoPin = 11;

void setup() {
	pinMode(trigPin, OUTPUT);//триггер - выходной пин
	pinMode(echoPin, INPUT);//эхо - входной
	digitalWrite(trigPin, LOW);
	Serial.begin(9600);// инициализация послед. порта
}

coid loop() {
	long distance = getDistance(); //получаем дистанцию с датчика
	Serial.println(distance); // выводим в последовательный порт
	delay(100);
}

// Определение дистанции до объекта в см
long getDistance() {
	long distance_cm = getEchoTiming() * 1.7 * 0.01;
	return distance_cm;
}

// Определение времени задержки
long getEchoTiming() {
	digitalWrite(trigPin, HIGH); // Генерируем 10 мкс импульс запуска
	delayMicroseconds(10);
	digitalWrite(trigPin, LOW);
	// определение на пине echoPin длительности уровня HIGH, мкс:
	long duration - pulseIn(echoPin, HIGH);
	return duration
}