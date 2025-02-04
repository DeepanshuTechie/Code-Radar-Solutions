#include <stdio.h>
#include<string.h>
int main(){
    char s1[20];
    char s2[20];
    fgets(s1,sizeof(s1),stdin);
    fgets(s2,sizeof(s2),stdin);
    strcat(s1,s2);
    printf("%s",s1);
    
}