#include "soilTemp.h"

#define ONE_WIRE_BUS 11

// Setup a oneWire instance to communicate with any OneWire devices
OneWire oneWire(ONE_WIRE_BUS);

// Pass our oneWire reference to Dallas Temperature sensor
DallasTemperature sensors(&oneWire);

/*initializes the soil temeperature sensor*/
void setup_Soil_Temperature_Sensor(void)
{
    // Start serial communication for debugging purposes
    Serial.begin(9600);
    // Start up the library
    sensors.begin();
}

/*returns soil temp in celsius*/
float check_Soil_Temperature()
{
    sensors.requestTemperatures();
    Serial.print("Celsius temperature: ");
    Serial.println(sensors.getTempCByIndex(0));
    return sensors.getTempCByIndex(0);
}
