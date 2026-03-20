// Define a structure called Sensor with:
//   - name (string, max 20 chars)
//   - id (integer)
//   - value (float)
//   - status (use enum: OFF, ON, ERROR)
// Create 3 sensor instances
// Fill them with data
// Print all details of each sensor
// Write a function that takes a Sensor and prints its details
#include<stdio.h>
typedef enum{
    OFF = 0,
    ON = 1,
    ERROR = 2
}SensorState;
struct Sensor{
    char name[20];
    int id;
    float value;
    SensorState status;
}s1,s2,s3;
void print_sen_data(struct Sensor);
int main(){
    /*
    INPUT BUFFER ISSUE (scanf + fgets)

- scanf reads only the required data (like int, float)
- It DOES NOT remove the newline ('\n') when Enter is pressed
- That '\n' stays in the input buffer

- fgets reads input INCLUDING '\n'
- If '\n' is already in buffer, fgets reads it immediately
- Result: fgets does not wait for input → string becomes empty

KEY RULE:
Never mix scanf and fgets without handling leftover '\n'

FIX METHODS:
1. Clear the buffer after scanf (consume '\n')
2. Use only fgets for all inputs (recommended)
3. Manually handle newline before next fgets

IMPORTANT:
- This happens even if inputs are given line by line
- Every Enter adds '\n' to buffer

EMBEDDED NOTE:
- Same issue happens in UART / serial buffers
- If not handled → skipped input / wrong data

EXTRA:
- fgets can be used to take ANY input (int, float, etc.)
- You just read as string and convert later if needed
*/
    for (int i =0;i<3;i++){
        printf("Enter the %d sensor data : \n",i);
        if (i == 0)
        {
            fgets(s1.name,20,stdin);
            scanf("%d %f %d",&s1.id,&s1.value,&s1.status);
            getchar();//this consumes the leftover \n
        }
        else if (i == 1)
        {
            fgets(s2.name,20,stdin);
            scanf("%d %f %d",&s2.id,&s2.value,&s2.status);
            getchar();
        }
        else if (i == 2)
        {
            fgets(s3.name,20,stdin);
            scanf("%d %f %d",&s3.id,&s3.value,&s3.status);
            getchar();
        }
    }
    printf("Sensors data \n");
    printf("%s %d %.2f %d \n",s1.name,s1.id,s1.value,s1.status);
    printf("%s %d %.2f %d \n",s2.name,s2.id,s2.value,s2.status);
    printf("%s %d %.2f %d \n",s3.name,s3.id,s3.value,s3.status);
    print_sen_data(s1);
    print_sen_data(s2);
    print_sen_data(s3);
}
void print_sen_data(struct Sensor a1){
    printf("The sensors data is \n");
    printf("%s %d %.2f %d \n",a1.name,a1.id,a1.value,a1.status);
}
//this is same but with the pointer given to function rather than a struct value s--this is more eficient the below code
/*
// Define a structure called Sensor with:
//   - name (string, max 20 chars)
//   - id (integer)
//   - value (float)
//   - status (use enum: OFF, ON, ERROR)
// Create 3 sensor instances
// Fill them with data
// Print all details of each sensor
// Write a function that takes a Sensor and prints its details
#include<stdio.h>
typedef enum{
    OFF = 0,
    ON = 1,
    ERROR = 2
}SensorState;
struct Sensor{
    char name[20];
    int id;
    float value;
    SensorState status;
}s1,s2,s3;
void print_sen_data(struct Sensor *);
int main(){
    for (int i =0;i<3;i++){
        printf("Enter the %d sensor data : \n",i);
        if (i == 0)
        {
            fgets(s1.name,20,stdin);
            scanf("%d %f %d",&s1.id,&s1.value,&s1.status);
            getchar();//this consumes the leftover \n
        }
        else if (i == 1)
        {
            fgets(s2.name,20,stdin);
            scanf("%d %f %d",&s2.id,&s2.value,&s2.status);
            getchar();
        }
        else if (i == 2)
        {
            fgets(s3.name,20,stdin);
            scanf("%d %f %d",&s3.id,&s3.value,&s3.status);
            getchar();
        }
    }
    printf("Sensors data \n");
    printf("%s %d %.2f %d \n",s1.name,s1.id,s1.value,s1.status);
    printf("%s %d %.2f %d \n",s2.name,s2.id,s2.value,s2.status);
    printf("%s %d %.2f %d \n",s3.name,s3.id,s3.value,s3.status);
    print_sen_data(&s1);
    print_sen_data(&s2);
    print_sen_data(&s3);
}
void print_sen_data(struct Sensor *a1){
    printf("The sensors data is \n");
    printf("%s %d %.2f %d \n",a1->name,a1->id,a1->value,a1->status);
}

*/


