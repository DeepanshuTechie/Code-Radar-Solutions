#include <stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char ch[30];
    int count = 0;
    scanf("%s",&ch);
    int len = strlen(ch).tolower();
    for(int i = 0;i<len;i++){
        if(ch[i] == 'a' ||ch[i] == 'e'|| ch[i] == 'i'|| ch[i] == 'o'|| ch[i] == 'u' ){
            count +=1;
        }
    }
        printf("%d",count);
    return 0;
}