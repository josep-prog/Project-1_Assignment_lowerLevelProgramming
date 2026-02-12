#define TEMP_SENSOR_PIN 0
#define FAN_PIN 8
#define THRESHOLD_TEMP 30

void setup() {
    pinMode(FAN_PIN, OUTPUT);
    Serial.begin(9600);
}

void loop() {
    int sensorValue = analogRead(TEMP_SENSOR_PIN);

    float voltage = sensorValue * (5.0 / 1023.0);
    float temperature = voltage * 100.0;

    Serial.print("Temp: ");
    Serial.println(temperature);

    if (temperature > THRESHOLD_TEMP) {
        digitalWrite(FAN_PIN, 1); // ON
    } else {
        digitalWrite(FAN_PIN, 0); // OFF
    }

    delay(1000); 
}
