/*
   Project name: ESP32 Water Level Sensor
   Modified Date: 25-06-2024
   Code by: Projectslearner
   Website: https://projectslearner.com/learn/esp32-water-level-sensor
*/

// Define the GPIO pin connected to the water level sensor
const int waterLevelPin = 15; // GPIO pin D15 on ESP32

void setup() {
  Serial.begin(9600); // Initialize serial communication
  pinMode(waterLevelPin, INPUT); // Set the water level sensor pin as input
}

void loop() {
  // Read the water level sensor state
  int waterLevelState = digitalRead(waterLevelPin);

  // Check if water is present or not
  if (waterLevelState == HIGH) {
    Serial.println("Water is present.");
  } else {
    Serial.println("No water.");
  }

  delay(1000); // Delay before next reading
}
