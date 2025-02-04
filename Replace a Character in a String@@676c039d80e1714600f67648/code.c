#include <stdio.h>
#include<string.h>
int main(){
    char ch[20];
    char n;
    char r;
    scanf("%s",ch);
    scanf("\n%c",&n);
    scanf("\n%c",&r);
    int len = strlen(ch);
    for(int i = 0;i<len;i++){
        if(ch[i] == n){
            ch[i] = r;
        }
    }
    printf("%s",ch);
}