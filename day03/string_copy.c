// Store a source string "EMBEDDED"
// Copy it to another array manually WITHOUT using strcpy
// Print the copied string
#include<stdio.h>
int main(){
    char strng[30] = "EMBEDDED";
    char arry[30];
    int i;
    for(i = 0;i<30;i++){
        arry[i] =strng[i];
        if(strng[i] == '\0'){
            break;
        }
    }
    for(int j =0;j<i;j++){
        printf("%c",arry[j]);
    }
}