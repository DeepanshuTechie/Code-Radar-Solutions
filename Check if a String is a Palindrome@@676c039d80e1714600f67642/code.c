#include <stdio.h>
#include<string.h>
int main(){
    char ch[20];
    scanf("%s",&ch);
    int len = strlen(ch);
    if(len == 1){
        printf("Yes");
    }
    for(int i = 0;i<len/2;i++){
        if(ch[i] != ch[len-i-1]){
            printf("No");
            break;
        }
        else{
            printf("Yes");
        }
    }
    return 0;
}