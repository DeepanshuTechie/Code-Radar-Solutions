#include <stdio.h>
#include<string.h>
int main(){
    char ch[10];
    scanf("%s",ch);
    int l = strlen(ch);
    for(int i = 0;i<l;i++){
        if(ch[i] == 'a' || ch[i] == 'e' || ch[i] == 'i' || ch[i] == 'o' || ch[i] == 'u' || ch[i] == 'A' || ch[i] == 'E' || ch[i] == 'I' || ch[i] == 'O' || ch[i] == 'U'){
            ch[i] = '*';
        }
    }
}