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
