// Include guard
// Define SensorStatus enum: SENSOR_OFF, SENSOR_ON, SENSOR_ERROR
// Define Sensor struct: id (int), name (char[30]), value (float), status (SensorStatus)
// Declare these functions (prototypes only, no bodies):
//   void sensor_print(Sensor *s);
//   Sensor* sensor_create(int id, char *name, float value, SensorStatus status);
//   void sensor_destroy(Sensor *s);
#ifndef SENSOR_H
#define SENSOR_H
typedef enum {
    SENSOR_OFF = 0,
    SENSOR_ON = 1,
    SENSOR_ERROR =2
}SensorStatus;
typedef struct{
    int id;
    char name[30];
    float value;
    SensorStatus status;
}Sensor;
void sensor_print(Sensor *);
Sensor* sensor_create(int id,char *name,float value,SensorStatus status);
void sensor_destroy(Sensor **);
#endif