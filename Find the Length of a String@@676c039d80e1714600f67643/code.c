#include <stdio.h>
#include<string.h>
int main(){
    char ch[100];
    fgets(ch,100;stdin);
    int count = 0;
    int i = 0;
    while(ch[i] != '/0'){
        count ++;
        i++;
    }
    printf("%d",count);
    return 0;
}