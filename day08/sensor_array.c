// Define a Sensor struct with: id, name, value, status(enum)
// Create an ARRAY of 5 sensors
// Fill all 5 using a loop
// Write a function that searches by ID
// If found, print that sensor's details
// If not found, print "Sensor not found"
#include<stdio.h>
void search_by_id(int);
//incase of local structures we can use
//void search_by_id(struct Sensor arr[], int size, int idn)
typedef enum{
    ON = 1,
    OFF = 0,
    ERROE = 2
}Sensor_status;
struct Sensor
{
    int id;
    char name[30];
    float value;
    Sensor_status status;
};
struct Sensor sensor[5];
int main(){
    for(int i =0;i<5;i++){
        printf("Enter the data of %d sensor \n",i);
        scanf("%d%s%f%d",&sensor[i].id,sensor[i].name,&sensor[i].value,&sensor[i].status);
    }
    int a;
    printf("Enter a id to search \n");
    scanf("%d",&a);
    search_by_id(a);
    
}
void search_by_id(int idn){
    for(int i=0;i<5;i++){
        if(sensor[i].id == idn){
            printf("%d %s %f %d \n",sensor[i].id,sensor[i].name,sensor[i].value,sensor[i].status);
            break;
        }else if(i == 4){
            printf("Sensor not found");
        }
    }
}

