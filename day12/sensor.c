// Include sensor.h
// Include any other headers you need
// Write the actual bodies of all 3 functions:
//   sensor_print    — prints all fields of the sensor
//   sensor_create   — mallocs a Sensor, fills fields, returns pointer
//   sensor_destroy  — frees the sensor, sets pointer to NULL (think about how)
#include "sensor.h"
#include<stdio.h>
#include<stdlib.h>
void sensor_print(Sensor *data){
    printf("%d %s %f \n",data->id,data->name,data->value);
}
Sensor* sensor_create(int id,char *name,float value,SensorStatus status){
    Sensor *sensor_name = (Sensor *)malloc(sizeof(Sensor));
    if(sensor_name == NULL){
        printf("Error \n");
        return 0;
    }
    printf("Enter the sensor details \n");
    scanf("%d %s %f %d",&sensor_name->id,&sensor_name->name,&sensor_name->value,&sensor_name->status);
    return sensor_name;
}
void sensor_destroy(Sensor ** ptr){
    free(*ptr);
    *ptr = NULL;
}
