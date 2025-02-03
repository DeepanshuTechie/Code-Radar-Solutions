#include <stdio.h>
#include<string.h>
int main(){
    char st[20];
    scanf("%s",&st);
    int len = strlen(st);
    printf("%d",len);
    int count = 0;
    for(int i = 0;i<len;i++){
        count+=1;
    }
    printf("%d",count);
    return 0;
}