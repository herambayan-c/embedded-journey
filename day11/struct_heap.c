// Define a Sensor struct (id, name, float value) — you know this already
// Dynamically allocate ONE Sensor using malloc
// Check allocation
// Fill its fields using ->
// Print its fields
// Free and NULL
// Now dynamically allocate an ARRAY of 3 Sensors
// Fill all 3 in a loop
// Print all 3
// Free and NULL
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Sensor{
    int id;
    char name[30];
    float value;
};
int main(){
    struct Sensor *ONE = (struct Sensor*)malloc(sizeof(struct Sensor));
    if(ONE == NULL){
        printf("Error \n");
        return 0;
    }

    ONE->id = 699;
    strcpy(ONE->name,"Herambayan");
    // ONE->name = "Herambayan"; this is not valid as we can't directly give string like that 
    //strcpy(ONE-> name,"Herambayan") we can do this with #include<string.h> or we can just take input from user
    ONE->value = 99.9;
    printf("%d %s %f \n",ONE->id,ONE->name,ONE->value);
    free(ONE);
    ONE = NULL;
    struct Sensor *data[3];
    for(int i=0;i<3;i++){
    data[i] = malloc(sizeof(struct Sensor));
    if(data[i] == NULL){
        printf("Error \n");
        return 0;
    }
    }
    for(int i=0;i<3;i++){
        printf("Enter the data of %d sensor \n",i+1);
        scanf("%d %s %f",&data[i]->id,data[i]->name,&data[i]->value);
    }
    for(int i=0;i<3;i++){
        printf("%d %s %f \n",data[i]->id,data[i]->name,data[i]->value);
        free(data[i]);
        data[i] = NULL;
    }
printf("done");
}
/*// METHOD 2: Single block allocation (acts like an array of structs)

// Allocate memory for 3 Sensor structures (continuous memory block)
struct Sensor *data = malloc(3 * sizeof(struct Sensor));

// Always check if allocation succeeded
if(data == NULL){
    printf("Memory allocation failed\n");
    return 0;
}

// Fill data using array-style access
// data[i] behaves like a normal array element because memory is continuous
for(int i = 0; i < 3; i++){
    printf("Enter data for sensor %d:\n", i+1);
    scanf("%d %s %f", &data[i].id, data[i].name, &data[i].value);
    // NOTE:
    // & needed for int and float
    // name is array → no &
}

// Print all sensor data
for(int i = 0; i < 3; i++){
    printf("Sensor %d: %d %s %.2f\n", i+1, data[i].id, data[i].name, data[i].value);
}

// Free entire block at once (only ONE free needed)
free(data);
data = NULL;  // good practice to avoid dangling pointer

/*
KEY NOTES:
- malloc gives ONE continuous block → behaves like array
- data[i] = *(data + i)
- Use '.' (not ->) because data[i] is a struct, not a pointer
- Only one free() needed
*/

