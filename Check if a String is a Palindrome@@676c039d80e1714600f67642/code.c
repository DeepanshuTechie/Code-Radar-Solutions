#include <stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){
    bool ispal = true;
    char ch[20];
    scanf("%s",ch);
    int len = strlen(ch);
    if(len == 1){
        printf("True");
        break;
    }
    for(int i = 0;i<len/2;i++){
        if(ch[i] != ch[len-i-1]){
            ispal = false;
            break;
        }
    }
    if(ispal){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}