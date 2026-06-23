# 🚨 Motion Detection Alerter using ESP32

## 📌 Project Overview

The **Motion Detection Alerter** is an IoT-based security project developed using the **ESP32 DOIT DevKit V1** and simulated in **Wokwi**. The system detects motion using a PIR (Passive Infrared) sensor and immediately turns on an LED while displaying an alert message on the Serial Monitor.

This project demonstrates the fundamentals of IoT sensing, event detection, and real-time response, making it suitable for smart home security applications.

---

## 🚀 Features

* Detects motion using a PIR sensor
* Turns an external LED ON when motion is detected
* Turns the LED OFF when no motion is present
* Displays motion status in the Serial Monitor
* Simulated entirely in Wokwi using ESP32

---

## 🛠 Hardware Components

* ESP32 DOIT DevKit V1
* PIR Motion Sensor
* LED
* 220Ω Resistor (recommended for real hardware)
* Jumper Wires

---

## 🔌 Circuit Connections

| PIR Sensor | ESP32  |
| ---------- | ------ |
| VCC        | 3V3    |
| GND        | GND    |
| OUT        | GPIO13 |

| LED         | ESP32                       |
| ----------- | --------------------------- |
| Anode (+)   | GPIO4                       |
| Cathode (-) | GND (through 220Ω resistor) |

---

## 💻 Software Used

* Visual Studio Code
* PlatformIO
* Wokwi Simulator
* Arduino Framework

---

## ▶️ How to Run

1. Clone or download this repository.
2. Open the project in Visual Studio Code.
3. Ensure the Wokwi extension and PlatformIO are installed.
4. Build the project using PlatformIO.
5. Start the Wokwi simulation.
6. Click the PIR sensor and select **Simulate Motion**.
7. Observe the LED turning ON and the Serial Monitor displaying motion alerts.

---

## 📂 Project Structure

```
Motion-Detection-Alerter/
│
├── src/
│   └── main.cpp
├── diagram.json
├── wokwi.toml
├── platformio.ini
└── README.md
```

---

## ⚙️ Working Principle

1. The ESP32 continuously monitors the PIR sensor.
2. When motion is detected, the PIR sensor outputs a HIGH signal.
3. The ESP32 reads the signal and turns ON the external LED.
4. A "Motion Detected!" message is displayed in the Serial Monitor.
5. When motion stops, the LED turns OFF and the Serial Monitor displays "No Motion".

---

## 🌍 Real-World Applications

* Smart Home Security
* Intruder Detection Systems
* Office Security Monitoring
* Automatic Corridor Lighting
* Occupancy Detection
* Home Automation Projects

---

## 📚 Skills Demonstrated

* ESP32 Programming
* Arduino Framework
* GPIO Input and Output
* PIR Motion Sensor Interfacing
* Wokwi Simulation
* PlatformIO Development
* Embedded Systems Programming
* Internet of Things (IoT) Fundamentals

---

## 🔮 Future Enhancements

* Send notifications to a smartphone using Blynk
* Email or SMS alerts on motion detection
* Add a buzzer alarm
* Store motion logs in the cloud
* Integrate with MQTT or Firebase
* Capture images using an ESP32-CAM



