// Include sensor.h only — not sensor.c
// In main:
//   Create 3 sensors using sensor_create()
//   Print all 3 using sensor_print()
//   Destroy all 3 using sensor_destroy()
#include "sensor.h"
int main(){
    Sensor *one = sensor_create(699,"Herambayan",12.34,SENSOR_ON);
    Sensor *two = sensor_create(700,"ramba",67.90,SENSOR_OFF);
    Sensor *three = sensor_create(701,"bahubali",677.90,SENSOR_ERROR);
    sensor_print(one);
    sensor_print(two);
    sensor_print(three);
    sensor_destroy(&one);
    sensor_destroy(&two);
    sensor_destroy(&three);
}