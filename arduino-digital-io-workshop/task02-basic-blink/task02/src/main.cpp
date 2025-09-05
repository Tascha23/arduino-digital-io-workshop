// src/main.cpp
#include <Arduino.h>

#define LED_PIN 13
#define BLINK_DELAY 1000

void setup() {
    pinMode(LED_PIN, OUTPUT);
    Serial.begin(9600);
    Serial.println("Basic LED Blink Started");
}

void loop() {
    digitalWrite(LED_PIN, HIGH);
    Serial.println("LED ON");
    delay(BLINK_DELAY);

    digitalWrite(LED_PIN, LOW);
    Serial.println("LED OFF");
    delay(BLINK_DELAY);
}
