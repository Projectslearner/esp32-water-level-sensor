# ESP32 Water Level Sensor Project

### Project Overview
The ESP32 Water Level Sensor project demonstrates how to interface a water level sensor with an ESP32 microcontroller to detect the presence or absence of water. This project is essential for applications where monitoring water levels is crucial, such as in automatic irrigation systems, water tanks, or environmental monitoring setups.

### Components Needed
- **ESP32 Microcontroller**: Used to interface with the water level sensor and process sensor readings.
- **Water Level Sensor**: Detects the presence or absence of water and provides a digital output based on its state.
- **Jumper Wires**: Connect the water level sensor to the ESP32.
- **Breadboard**: Optional, for organizing circuit connections if needed.

### Block diagram


### Circuit Setup
1. **Connecting the Water Level Sensor to ESP32:**
   - **Water Level Sensor Pin**: Connect the digital output pin of the water level sensor to a GPIO pin on the ESP32 (e.g., GPIO 15).

### Instructions
1. **Setup:**
   - Initialize Serial communication using `Serial.begin(9600)` for debugging purposes.
   - Set the pinMode for the water level sensor pin using `pinMode(waterLevelPin, INPUT)` to configure it as an input.

2. **Operation:**
   - **Reading Water Level State:**
     - Use `digitalRead(waterLevelPin)` to read the state of the water level sensor.
     - Print "Water is present." if the sensor state is HIGH (indicating water presence).
     - Print "No water." if the sensor state is LOW (indicating no water detected).

3. **Output:**
   - Continuously monitor and display the water level sensor state.
   - Implement actions based on water presence or absence as required by your application.

4. **Considerations:**
   - **Sensor Placement:** Position the sensor appropriately to ensure accurate detection of water levels.
   - **Environmental Conditions:** Ensure the sensor is suitable for the environmental conditions where it is deployed.
   - **Power Supply:** Provide stable power supply to the sensor for reliable operation.

### Applications
- **Automatic Irrigation Systems:** Monitor water levels in soil or reservoirs to optimize irrigation.
- **Water Tanks:** Ensure tanks are adequately filled or prevent overflow.
- **Environmental Monitoring:** Track water levels in natural bodies or research setups.

### Useful Links
🌐 [ProjectsLearner - ESP32 Water Level Sensor](https://projectslearner.com/learn/esp32-water-level-sensor)  
📧 [Email](mailto:projectslearner@gmail.com)  
📸 [Instagram](https://www.instagram.com/projectslearner/)  
📘 [Facebook](https://www.facebook.com/projectslearner)  
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)  
📘 [LinkedIn](https://www.linkedin.com/in/projectslearner)

Created with ❤️ by ProjectsLearner