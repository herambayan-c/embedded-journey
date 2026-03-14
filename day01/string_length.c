// string_length.c
// Store the string "EMBEDDED"
// Print each character one by one using a loop
// Count the length WITHOUT using strlen
// Print the total length at the end
#include<stdio.h>
int main(){
    char namestr[] = "EMBEDDED";
    int i=0,count =0;
    while (namestr[i]!='\0')
    {
        count++;
        i++;
    }

    for(i=0;i<count;i++){
        printf("%c \n",namestr[i]);
    }
        printf("The length of the string is %d",count);

}