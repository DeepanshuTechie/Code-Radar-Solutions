#include <stdio.h>
#include<string.h>
int main(){
    char ch[15];
    char c;
    scanf("%s",ch);
    
    scanf(" %c",&c);
    int count = 0;
    int len = strlen(ch);
    for(int i = 0;i<len;i++){
        if(ch[i] == c){
            count +=1;
        }
    }
    printf("%d",count);
    return 0;
}