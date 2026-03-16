// Take a string input from user
// Check if it is a palindrome or not
// Print "Palindrome" or "Not Palindrome"
// Do NOT use any string library functions
#include<stdio.h>
int main(){
    char str[30];
    int end_of_the_str = 0,check = 1    ;
    printf("Enter the string : ");
    fgets(str,sizeof(str),stdin);
    for(int i =0;i<sizeof(str);i++){
        if(str[i] == '\n' || str[i] == '\0'){
            end_of_the_str = i;
            break;
        }
    }
    //printf("%d",end_of_the_str);
    int check_till = (end_of_the_str/2)-1;
    end_of_the_str = end_of_the_str-1;
    for(int i = 0;i<=check_till;i++){
        if(str[i] != str[end_of_the_str-i]){
            printf("Not Palindrome");
            check =0;
            break;
        }
    }
    if(check != 0){
        printf("Palindrome");
    } 
}