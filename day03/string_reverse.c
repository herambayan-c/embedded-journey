// Store a string entered by user
// Reverse it WITHOUT using strrev
// Print the reversed string
#include<stdio.h>
int main(){
    char usr_string[30];
    printf("Enter the string : ");
    fgets(usr_string,30,stdin);
    //usr_string[strcspn(usr_string, "\n")] = '\0'; can be used to eliminate the \n in fgets 
    //strcspn gives the index of the required char - requires string.h
    int i =0 ,null;
    while (i < 30)
    {
      if(usr_string[i] == '\0'){
        null = i;
        break;
      }
        i++;
    }
    while (null >= 2)
    {
        printf("%c",usr_string[null-2]); //here -2 because the fgets stores string as "hey \n \0" so to eliminate that last 2 unwanted chars
        null--;
    }
    
}