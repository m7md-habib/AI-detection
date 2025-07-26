AI Color & Face Detection Projects

This repository contains two mini-projects:

1. **HuskyLens Face Detection with LED Trigger**
2. **Red Color Detection using OpenCV**

---

## 1️⃣ HuskyLens Face Detection with LED

This project uses the **HuskyLens AI Vision Sensor** to detect my faces. When a my face is detected, a connected **LED is turned on** via a microcontroller (e.g., Arduino).

### 🧠 Project Overview

- HuskyLens is set to **Face Recognition mode**
- When the sensor recognizes a face, it sends a signal (via UART or I2C) to the microcontroller
- The microcontroller triggers an **LED to turn on**
- Once the face is no longer detected, the LED turns off

### 🧰 Hardware Required

- HuskyLens AI Camera
- Arduino (or compatible microcontroller)
- LED + Resistor
- Wires and breadboard



2️⃣ Red Color Detection using OpenCV
This project uses OpenCV to detect red color in real-time from a webcam feed.

📸 Project Overview
Captures video from a webcam (phone used via Iriun)

Converts each frame to HSV

Masks red color using HSV range

Displays the original and filtered red frames

🧪 Requirements
Python 3.8+

OpenCV

NumPy



result images: 



1:

![صورة واتساب بتاريخ 1447-02-01 في 15 58 22_c773817e](https://github.com/user-attachments/assets/e2a3046d-80be-49b7-a690-7a0aab05be25)






2:


![صورة واتساب بتاريخ 1447-02-01 في 16 10 22_4b3046df](https://github.com/user-attachments/assets/e2f3a2c8-5c7e-4ead-9b9c-de33ced180fe)






