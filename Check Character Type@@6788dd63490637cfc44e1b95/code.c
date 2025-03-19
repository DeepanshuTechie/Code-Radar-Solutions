#include<stdio.h>
#include<ctype.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if(isdigit(ch)){
        printf("Digit");
    }
    else if(isalpha(ch)){
       char arr[15] = ['a','e','i','o','u','A','E','I','O','U'];
        for(int i = 0;i<sizeof(arr);i++){
            if(arr[i] == ch){
                printf("Vovel");
            }
            else{
                printf("Consonent");
            }
        }
    }
    else{
        printf("Special Character");
    }
    return 0;
}