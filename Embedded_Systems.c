#include <Arduino.h>

int tempSensor = A0;
int fan = 8;
int thresholdTemp = 30;

void setup() {
    pinMode(fan, OUTPUT);
    Serial.begin(9600);
}

void loop() {
    int sensorReading = analogRead(tempSensor);
    float tempC = sensorReading * (5.0 / 1023) * 100;
    Serial.print("Temp: ");
    Serial.println(tempC);

    if (tempC > thresholdTemp) {
        digitalWrite(fan, HIGH);  // Turn fan ON
    } else {
        digitalWrite(fan, LOW);   // Turn fan OFF
    }

    delay(1000);
}