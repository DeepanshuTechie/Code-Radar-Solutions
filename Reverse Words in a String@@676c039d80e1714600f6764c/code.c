#include <stdio.h>
#include<string.h>
int main(){
    char ch[20];
    fgets(ch,sizeof(ch),stdin);
    int len = strlen(ch);
    for(int i = len;i>0;i--){
        printf("%c",ch[i]);
    }
    return 0;
}