#include <stdio.h>
#include<string.h>
int main(){
    char ch[10];
    scanf("%s",ch);
    char b[10] = tolower(ch);
    int l = strlen(b);
    for(int i = 0;i<l;i++){
        if(b[i] == 'a' || b[i] == 'e' || b[i] == 'i' || b[i] == 'o' || b[i] == 'u'){
            ch[i] = '*';
        }
    }
}