# Halloween Trick-or-Treat Project by @jfontecha

## Summary
This project is designed to create an interactive Halloween trick-or-treat experience using PlatformIO. The project involves programming a microcontroller to control various Halloween-themed devices and sensors. Ready to be included in your halloween crafts!

![Protoboard photo](./images/esp-trick-or-treat-photo.png)

## Functionality
- **Motion Detection**: Detects motion to trigger Halloween effects.
- **Sound Effects**: Plays spooky sounds when motion is detected.
- **Lighting Control**: Controls LED lights to create a spooky atmosphere.
- **User Interaction**: Allows users to interact with the setup via buttons or other input devices.

## How to Build and Deploy

### Prerequisites
- PlatformIO IDE installed
- Compatible microcontroller (e.g., Arduino, ESP32)
- Required sensors and actuators (motion sensor, speaker, LEDs, etc.)

### Building the Project
1. Clone the repository:
    ```sh
    git clone https://github.com/yourusername/halloween-trick-or-treat.git
    ```
2. Open the project in PlatformIO IDE:
    ```sh
    platformio init --board <your_board>
    ```
3. Write or modify the code in the `src` directory.

### Deploying the Project
1. Connect your microcontroller to your computer.
2. Upload the code to the microcontroller:
    ```sh
    platformio run --target upload
    ```
3. Monitor the serial output (optional):
    ```sh
    platformio device monitor
    ```

### Ports and Connections

Below is a table detailing the ports and connections for the sensors and actuators to the ESP32 microcontroller:

| Component         | ESP32 Pin                     | 
|-------------------|-------------------------------|
| Ultrasonic Sensor | GPIO 12 (trigger) 13 (echo)   | 
| Servo motor       | GPIO 26                       | 
| LED 1             | GPIO 18                       | 
| LED 2             | GPIO 5                        | 

Ensure all connections are secure and double-check the pin assignments in your code.

### Connection Diagram

Below is a visual representation of the connections for the sensors and actuators to the ESP32 microcontroller:

![Connection Diagram](./images/esp32-trick-or-treat.png)


Enjoy your interactive Halloween setup!
