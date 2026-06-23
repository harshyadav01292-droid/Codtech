# Automatic Hand Sanitizer Dispenser using ESP32

An IoT-based **Automatic Hand Sanitizer Dispenser** built using the **ESP32 DOIT DevKit V1**, **HC-SR04 Ultrasonic Sensor**, and **SG90 Servo Motor**. The system detects a user's hand without physical contact and automatically dispenses sanitizer by rotating a servo motor.

This project was developed and simulated using **Wokwi** and **PlatformIO in Visual Studio Code**.

---

## 📌 Project Overview

Maintaining hand hygiene is essential in public and private spaces. This project demonstrates a touchless sanitizer dispensing system that uses an ultrasonic sensor to detect the presence of a hand. When a hand is detected within a predefined distance, the ESP32 activates a servo motor to simulate pressing the sanitizer pump.

This project showcases the practical use of sensors and actuators in an IoT-based automation system.

---

## 🚀 Features

- ✨ Touchless sanitizer dispensing
- 📏 Hand detection using an HC-SR04 ultrasonic sensor
- 🔄 Automatic servo motor operation
- ⚡ ESP32-based embedded system
- 💻 Simulated in Wokwi
- 🛠️ Developed using PlatformIO in Visual Studio Code

---

## 🛠️ Components Used

| Component | Quantity |
|-----------|----------|
| ESP32 DOIT DevKit V1 | 1 |
| HC-SR04 Ultrasonic Sensor | 1 |
| SG90 Servo Motor | 1 |
| Jumper Wires | As Required |

---

## 🔌 Circuit Connections

### HC-SR04 Ultrasonic Sensor

| HC-SR04 Pin | ESP32 Pin |
|-------------|-----------|
| VCC | 5V |
| GND | GND |
| TRIG | GPIO 5 |
| ECHO | GPIO 18 |

### SG90 Servo Motor

| Servo Pin | ESP32 Pin |
|-----------|-----------|
| VCC | 5V |
| GND | GND |
| Signal | GPIO 13 |

---

## ⚙️ Working Principle

1. The ESP32 continuously measures the distance using the HC-SR04 ultrasonic sensor.
2. When a hand is detected within approximately **10 cm**, the ESP32 activates the servo motor.
3. The servo rotates to simulate pressing the sanitizer pump.
4. After dispensing, the servo returns to its initial position.
5. The system waits briefly before checking for another hand to prevent repeated dispensing.

---

## 📂 Project Structure

```text
Automatic-Hand-Sanitizer-Dispenser/
│
├── src/
│   └── main.cpp
├── diagram.json
├── libraries.txt
├── platformio.ini
└── README.md
```

---

## 💻 Software Used

- Visual Studio Code
- PlatformIO Extension
- Wokwi Simulator
- Arduino Framework for ESP32

---

## ▶️ How to Run

1. Clone this repository.
2. Open the project in Visual Studio Code.
3. Install the PlatformIO extension.
4. Build the project.
5. Start the Wokwi simulation.
6. Move the virtual object near the ultrasonic sensor.
7. Observe the servo motor rotate to simulate sanitizer dispensing.

---

## 📈 Future Improvements

- Add a real sanitizer pump using a relay or motor driver.
- Display dispensing status on an OLED display.
- Connect the system to the Blynk IoT platform.
- Monitor usage statistics remotely.
- Add a refill level sensor with notifications.

---

## 🎯 Learning Outcomes

This project helped me learn:

- ESP32 programming
- Ultrasonic distance measurement
- Servo motor control
- Sensor and actuator interfacing
- Automation logic
- IoT simulation using Wokwi
- Embedded systems development with PlatformIO

---

## 👨‍💻 Author

**Vishesh Srivastava**

GitHub: https://github.com/vishsri12

---

⭐ **If you found this project helpful, consider giving it a star!**
