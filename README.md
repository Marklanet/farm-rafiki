# farm-rafiki

Automated Irrigation System Firmware

Introduction:
This repository contains firmware for an automated irrigation system designed to regulate water flow based on soil temperature readings. The firmware is intended for use with microcontroller-based systems and includes functionalities for interfacing with a soil temperature sensor and controlling an irrigation valve.

Hardware Components:

    Soil Temperature Sensor:
        Interfaced using the OneWire protocol.
        Provides real-time soil temperature readings.
    Irrigation Valve:
        Controlled using digital signals to open or close the valve, regulating water flow to plants.
    Microcontroller:
        Manages the operation of the soil temperature sensor, irrigation valve, and overall system logic.

Software Components:

    Main Loop:
        setup(): Initializes the soil temperature sensor and irrigation valve.
        loop(): Executes the main control logic continuously.
    Soil Temperature Sensor:
        setup_Soil_Temperature_Sensor(): Initializes the Dallas Temperature sensor library and serial communication for debugging.
        check_Soil_Temperature(): Requests temperature readings from the sensor, prints the temperature in Celsius, and returns the temperature value.
    Irrigation Valve:
        setup_Irrigation_Valve(): Initializes the irrigation valve by configuring pin modes and setting its initial state (closed).
        open_Irrigation_Valve(): Opens the irrigation valve by setting the appropriate pin state and prints a message indicating the valve status.
        close_Irrigation_Valve(): Closes the irrigation valve by setting the appropriate pin state and prints a message indicating the valve status.
        get_Irrigation_Valve_Status(): Reads the current status of the irrigation valve, prints a message indicating whether it is open or closed, and returns the valve status.
    State Management:
        ValveState enum: Defines two states (VALVE_CLOSED and VALVE_OPENED) representing the current state of the irrigation valve.
        currentValveState variable: Keeps track of the current state of the valve.

Operation:

    During setup, the soil temperature sensor and irrigation valve are initialized.
    In the main loop, the soil temperature is checked every 10 seconds.
    If the soil temperature exceeds 30 degrees Celsius and the irrigation valve is closed, the valve is opened to irrigate the plants.
    If the soil temperature falls at or below 30 degrees Celsius and the irrigation valve is open, the valve is closed to stop irrigation.

Conclusion:
This firmware provides an automated solution for maintaining optimal soil conditions by controlling irrigation based on real-time soil temperature readings. It ensures efficient water usage while promoting plant growth and health.

Note:

    Detailed testing and validation are recommended for reliable performance in real-world scenarios.
    Additional features such as error handling and calibration may be necessary for practical implementations.
