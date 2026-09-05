#include <Arduino.h>
#include <Wire.h>
#include <TinyGPS++.h>

// Smart Rescue Buoy - Kelompok 45
// Setup: ESP32 T-Beam (GPS + LoRa 915 MHz)

TinyGPSPlus gps;

void setup() {
  Serial.begin(115200);
  Serial1.begin(9600, SERIAL_8N1, 34, 12);
  Serial.println("[SYSTEM] Smart Rescue Buoy Initialized");
}

void loop() {
  while (Serial1.available() > 0) {
    gps.encode(Serial1.read());
  }
}