// Define a Time struct: hour, minute, second
// Define a SensorReading struct:
//   - sensor_id (int)
//   - value (float)
//   - timestamp (Time) — nested struct
// Create 3 SensorReading instances
// Fill them with data
// Print all readings with their timestamps
// Format: "Sensor 1 | Value: 23.5 | Time: 10:30:45"
#include<stdio.h>
struct Time
{
    int hour;
    int minute;
    int second;
};
struct SensorReading
{
    int sensor_id;
    float value;
    struct Time timestamp;

};
int main(){
    struct SensorReading s[3];
    for(int i=0;i<3;i++){
        printf("Enter the %d sensor data \n",i+1);
        scanf("%d %f %d %d %d",&s[i].sensor_id,&s[i].value,&s[i].timestamp.hour,&s[i].timestamp.minute,&s[i].timestamp.second);
    }
    for(int i=0;i<3;i++){
        printf("Sensor %d | Value: %f | Time: %02d:%02d:%02d \n",i+1,s[i].value,s[i].timestamp.hour,s[i].timestamp.minute,s[i].timestamp.second);
    }
}
