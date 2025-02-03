#include <stdio.h>
#include<string.h>
int main(){
    char st[15];
    scanf("%s",st);
    int l = strlen(st);
    for(int i= 0;i<l;i++){
        char j = (int)st[i]  - 32;
        printf("%c",j);
    }
    return 0;
}