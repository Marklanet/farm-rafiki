#line 1 "C:\\Users\\mark\\Desktop\\Synnefa IoT\\synnefa firmware\\farmshield\\app\\src\\libraries\\irrigationValve\\irrigationValve.h"
#ifndef IRRIGATIONVALVE_H
#define IRRIGATIONVALVE_H

#ifndef LIBRARIES_HDHR
#include "../libraries.h"
#endif

void setup_Irrigation_Valve(void);
void open_Irrigation_Valve(void);
void close_Irrigation_Valve(void);
bool get_Irrigation_Valve_Status(void);

#endif
