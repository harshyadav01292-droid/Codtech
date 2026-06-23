# 🏠 Smart Home Light Control Using ESP32

## 📌 Project Overview
This project demonstrates an IoT-based Smart Home Light Control System using an ESP32 microcontroller. The system allows users to remotely switch a light (represented by an LED in simulation) ON and OFF through the Blynk IoT platform over a Wi-Fi connection. The project is simulated using Wokwi, making it easy to test without physical hardware.

---

## 🎯 Objectives
- Learn the basics of Internet of Things (IoT).
- Connect an ESP32 to Wi-Fi.
- Interface the ESP32 with the Blynk IoT platform.
- Remotely control a light using a smartphone.
- Simulate the complete project using Wokwi.

---

## 🛠️ Components Used

| Component | Quantity |
|-----------|:--------:|
| ESP32 DevKit V1 | 1 |
| LED | 1 |
| 220Ω Resistor | 1 |
| Jumper Wires | As Required |
| Wi-Fi Connection (Wokwi Guest) | 1 |
| Blynk IoT Platform | 1 |

---

## 💻 Software Used
- Visual Studio Code
- PlatformIO Extension
- Wokwi Simulator
- Blynk IoT
- Git & GitHub

---

## 🔌 Circuit Connections

| ESP32 Pin | Component |
|-----------|-----------|
| GPIO 2 | LED Anode (+) |
| GND | 220Ω Resistor → LED Cathode (-) |

---

## ⚙️ Working Principle

1. The ESP32 connects to the Wokwi Wi-Fi network.
2. It authenticates with the Blynk Cloud using the project Auth Token.
3. A button widget in the Blynk mobile app sends values to Virtual Pin V0.
4. The ESP32 receives the command.
5. The LED connected to GPIO 2 turns ON or OFF accordingly.
6. This simulates controlling a home light remotely over the internet.

---

## ✨ Features
- Remote light control using a smartphone
- IoT-based communication using Blynk Cloud
- Real-time ON/OFF control
- Wi-Fi-enabled ESP32
- Easy to simulate in Wokwi
- Beginner-friendly IoT project

---

## 📂 Project Structure

```
Smart-Home-Light-Control/
│
├── src/
│   └── main.cpp
│
├── include/
│
├── lib/
│
├── platformio.ini
│
├── diagram.json
│
├── wokwi.toml
│
├── libraries.txt
│
└── README.md
```

---

## 🚀 How to Run

1. Clone this repository.
2. Open the project in Visual Studio Code.
3. Install the PlatformIO extension.
4. Open the project folder.
5. Replace the Blynk Template ID, Device Name, and Auth Token in `main.cpp`.
6. Click **Start Simulation** in Wokwi.
7. Open the Blynk app or Web Dashboard.
8. Toggle the switch to control the LED.

---

## 📱 Blynk Configuration

- Hardware: ESP32
- Connection Type: Wi-Fi
- Datastream: Virtual Pin V0
- Widget: Button (Switch Mode)

---

## 🌐 IoT Workflow

```
Smartphone
     │
     ▼
 Blynk Cloud
     │
     ▼
    Wi-Fi
     │
     ▼
    ESP32
     │
     ▼
     LED
```

---

## 📸 Simulation
The project is fully simulated using the Wokwi online simulator and behaves the same way as a real ESP32 connected to the Blynk IoT platform.

---

## 📚 Learning Outcomes
- ESP32 programming
- GPIO control
- Wi-Fi communication
- Blynk IoT integration
- Cloud-based device control
- IoT project simulation
- PlatformIO workflow

---

## 🔮 Future Improvements
- Multiple room light control
- Voice control using Google Assistant or Alexa
- Brightness control using PWM
- Light scheduling
- Energy consumption monitoring
- Motion sensor integration
- Automatic light control using an LDR

---

