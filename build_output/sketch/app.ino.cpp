#include <Arduino.h>
#line 1 "C:\\Users\\mark\\Desktop\\Synnefa IoT\\synnefa firmware\\farmshield\\app\\app.ino"
#ifndef LIBRARIES_HDHR
#include "src/libraries/libraries.h"
#endif

enum ValveState
{
    VALVE_CLOSED,
    VALVE_OPENED
};

ValveState currentValveState = VALVE_CLOSED;

#line 13 "C:\\Users\\mark\\Desktop\\Synnefa IoT\\synnefa firmware\\farmshield\\app\\app.ino"
void setup();
#line 21 "C:\\Users\\mark\\Desktop\\Synnefa IoT\\synnefa firmware\\farmshield\\app\\app.ino"
void loop();
#line 13 "C:\\Users\\mark\\Desktop\\Synnefa IoT\\synnefa firmware\\farmshield\\app\\app.ino"
void setup()
{
    setup_Soil_Temperature_Sensor();
    delay(1000);
    setup_Irrigation_Valve();
    delay(1000);
}

void loop()
{
    // Check soil temperature every 10 seconds
    delay(10000);
    float soilTemperature = check_Soil_Temperature();

    // Determine the valve status
    bool valveOpen = get_Irrigation_Valve_Status();

    // Update the valve state based on temperature and current valve status
    if (soilTemperature > 30.0 && currentValveState == VALVE_CLOSED)
    {
        open_Irrigation_Valve();
        currentValveState = VALVE_OPENED;
    }
    else if (soilTemperature <= 30.0 && currentValveState == VALVE_OPENED)
    {
        close_Irrigation_Valve();
        currentValveState = VALVE_CLOSED;
    }
}

