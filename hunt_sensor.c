/*
    Project name : Hunt sensor
    Modified Date: 08-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-uno-hunt-sensor-module
*/

const int sensorPin = 8;  // Line detection sensor interface
int previousState = LOW;  // Variable to store previous sensor state

void setup() {
  pinMode(sensorPin, INPUT);  // Define sensor as input  
  Serial.begin(9600);     // Initialize serial communication with PC
}

void loop() {
  int currentState = digitalRead(sensorPin); // Read value from sensor
  
  if (currentState != previousState) { 
    if (currentState == HIGH) {
      Serial.println("Line detected"); 
    } else {
      Serial.println("Line NOT detected"); 
    }
    previousState = currentState; // Update previous state
  }

  delay(100); // Small delay to debounce the sensor
}
