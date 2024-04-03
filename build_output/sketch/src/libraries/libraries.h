#line 1 "C:\\Users\\mark\\Desktop\\Synnefa IoT\\synnefa firmware\\farmshield\\app\\src\\libraries\\libraries.h"
#ifndef LIBRARIES_H
#define LIBRARIES_H

/*External Libraries*/
#include <OneWire.h>
#include <DallasTemperature.h>

/*Internal Libraries*/
#ifndef SOILTEMP_H
#include "soilTemp/soilTemp.h"
#endif

#ifndef IRRIGATIONVALVE_H
#include "irrigationValve/irrigationValve.h"
#endif

#endif