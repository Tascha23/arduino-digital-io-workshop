// src/main.cpp
#include <Arduino.h>

void setup() {
    Serial.begin(9600);
    Serial.println("=== Arduino UNO R3 Pin Test ===");

    // ทดสอบ Digital Pins
    for(int pin = 2; pin <= 13; pin++) {
        pinMode(pin, OUTPUT);
        digitalWrite(pin, HIGH);
        delay(100);
        digitalWrite(pin, LOW);
        Serial.print("Pin ");
        Serial.print(pin);
        Serial.println(" OK");
    }
}

void loop() {
    // ทดสอบ Analog Pins
    for(int pin = A0; pin <= A5; pin++) {
        int value = analogRead(pin);
        Serial.print("A");
        Serial.print(pin - A0);
        Serial.print(": ");
        Serial.println(value);
    }
    delay(1000);
}
