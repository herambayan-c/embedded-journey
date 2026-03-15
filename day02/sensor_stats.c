// Store 6 sensor readings in an array
// Write TWO functions:
// 1. find_max() - returns maximum value
// 2. find_min() - returns minimum value
// Call both from main and print results
#include<stdio.h>
float find_max(float [],int);
float find_min(float [],int);
int main(){
    float sen_readings[6];
    int i;
    printf("Enter the sensor readings : ");
    for(i=0;i<6;i++){
        scanf("%f",&sen_readings[i]);
    }
    float maximum = find_max(sen_readings,6);
    float minimum = find_min(sen_readings,6);
    printf("The maximum value of the given sensor data is %f \n",maximum);
    printf("The minimum value of the given sensor data is %f \n",minimum);
}
float find_max(float ary[],int size){
    float max = ary[0];
    int i;
    for(i=1;i<size;i++){
        if(max < ary[i]){
            max = ary[i];
        }
    }
    return max;
}
float find_min(float ary[],int size){
    float min = ary[0];
    int i;
    for(i=1;i<size;i++){
        if(min > ary[i]){
            min = ary[i];
        }
    }
    return min;
}