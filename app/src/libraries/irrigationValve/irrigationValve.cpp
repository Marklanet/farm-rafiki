#include "irrigationValve.h"

#define IRRIGATION_VALVE_PIN 18

/*the delays give the valve enough time to respond*/

void setup_Irrigation_Valve(void)
{
    Serial.begin(9600);
    pinMode(IRRIGATION_VALVE_PIN, OUTPUT);
    digitalWrite(IRRIGATION_VALVE_PIN, HIGH);
    delay(1000);
    Serial.println("Irrigation Valve Initialized");
}

void open_Irrigation_Valve(void)
{

    digitalWrite(IRRIGATION_VALVE_PIN, LOW);
    delay(1000);
    Serial.println("Irrigation Valve Opened");
}

void close_Irrigation_Valve(void)
{
    digitalWrite(IRRIGATION_VALVE_PIN, HIGH);
    delay(1000);
    Serial.println("Irrigation Valve Closed");
}

bool get_Irrigation_Valve_Status(void)
{
    bool valveStatus = !digitalRead(IRRIGATION_VALVE_PIN);
    Serial.print("Irrigation Valve Status: ");
    Serial.println(valveStatus ? "Open" : "Closed");
    return valveStatus;
}
