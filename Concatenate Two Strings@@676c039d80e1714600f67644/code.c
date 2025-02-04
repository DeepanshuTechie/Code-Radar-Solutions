#include <stdio.h>
#include<string.h>
int main(){
    char s1[20];
    char s2[20];
    scanf("%s",s1);
    scanf("%s",s2);
    strcat(s1,s2);
    printf("%s",s1);
    return 0;
}