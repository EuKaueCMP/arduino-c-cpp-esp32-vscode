# arduino-c-cpp-esp32-vscode

Firmware and embedded systems projects developed in C/C++ for ESP32 microcontrollers using VS Code and PlatformIO.

## Description

arduino-c-cpp-esp32-vscode contains practical firmware projects developed during technical systems training. The repository explores embedded programming on the ESP32 platform, encompassing digital I/O handling, software button debouncing, I2C peripheral interfacing, rotary encoder reading, C/C++ data structures, UART serial protocols, and wireless Bluetooth communication.

## Technologies

- **Microcontroller:** ESP32 (Espressif Systems)
- **Languages:** C, C++
- **Framework:** Arduino Framework for ESP32
- **Development Environment:** Visual Studio Code with PlatformIO extension
- **Communication Protocols:** I2C, UART (Serial), Bluetooth Serial

## Project Structure

```text
arduino-c-cpp-esp32-vscode/
└── Projects/
    ├── Aula 43 - Introdução ao ESP32 e ao VSCode/      # Toolchain setup and GPIO fundamentals
    ├── Aula 44 - ESP32 e Display LCD I2C 20 x 4/       # I2C bus addressing and alphanumeric display
    ├── Aula 45 - ESP32 - Botão (eliminando ruído)/     # Hardware input debouncing algorithms
    ├── Aula 46 - ESP32 - Funções/                      # Modular embedded function architecture
    ├── Aula 50 a 53 - ESP32 - Encoder/                 # Quadrature rotary encoder signal processing
    ├── Aula 54 - ESP32 - Structures e Strings/         # Custom C/C++ structs and memory manipulation
    ├── Aula 55/56 - Serial/                            # UART stream buffer reading and command parsing
    ├── Aula 57 - ESP32 Exercicio Bluetooth/            # Wireless telemetry via Bluetooth Serial
    └── Aula 59 - FullDuplex Master & Slave/            # Two-way serial communication between microcontrollers
```

## Features

- **Peripheral & Display Integration:** Controls 20x4 alphanumeric LCDs over the two-wire I2C protocol.
- **Signal Processing:** Captures pulse transitions from rotary encoders and implements software debouncing for pushbuttons.
- **Serial Communication (UART):** Implements bidirectional full-duplex communication and data streaming across serial interfaces.
- **Wireless Bluetooth:** Transmits sensor readings and actuator commands wirelessly using the ESP32 onboard Bluetooth stack.
- **Data Structuring:** Organizes telemetry packets and state machine configurations using native C/C++ `struct` definitions.

## Setup & Flashing

### Prerequisites
- [Visual Studio Code](https://code.visualstudio.com/) with PlatformIO extension
- ESP32 Development Board connected via USB
- USB-to-UART bridge drivers (CP210x or CH340)

### Building and Uploading Firmware
1. Clone the repository:
```bash
git clone https://github.com/EuKaueCMP/arduino-c-cpp-esp32-vscode.git
```

2. Open the desired lesson project in VS Code with PlatformIO.

3. Connect your ESP32 board via USB.

4. Build and upload using PlatformIO:
```bash
pio run --target upload
```

5. Open the serial monitor to view console output:
```bash
pio device monitor
```

## Developer

**Kauê Sérgio Campos**  
GitHub: [@EuKaueCMP](https://github.com/EuKaueCMP)
