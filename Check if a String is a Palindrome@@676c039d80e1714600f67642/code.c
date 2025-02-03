#include <stdio.h>
#include<string.h>
int main(){
    char ch[20];
    scanf("%s",&ch);
    int len = strlen(ch);
    for(int i = 0;i<len/2;i++){
        if(ch[i] == ch[l-i-1]){
            printf("Yes");
        }
        else{
            printf("No");
        }
    }
    return 0;
}