#include <stdio.h>
#include<string.h>
int main(){
    ispal = true;
    char ch[20];
    scanf("%s",&ch);
    int len = strlen(ch);
    if(len == 1){
        printf("True");
    }
    for(int i = 0;i<len/2;i++){
        if(ch[i] != ch[len-i-1]){
            ispal = false;
            
        }
    }
    if(ispal){
        printf("True");
    }
    else{
        printf("False");
    }
    return 0;
}