// sensor_max.c
// Store 5 sensor readings in an array
// Find the maximum reading
// Print it
#include<stdio.h>
int main(){
    int data[5];
    int i;
    printf("Enter the sensor values");
    for(i=0;i<5;i++){
        scanf("%d",&data[i]);
    }
    int max = data[0];
    for (i=0;i<5;i++){
        if(max < data[i]){
            max = data[i];
        }
    }
    printf("The max data received by sensor is %d",max);
}