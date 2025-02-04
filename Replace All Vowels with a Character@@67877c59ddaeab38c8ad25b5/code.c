#include <stdio.h>
#include<string.h>
int main(){
    char ch[15];
    scanf("%s",ch);
    char k;
    scanf("\n%c",&k);
    int l = strlen(ch);
    for(int i = 0;i<l;i++){
        if(ch[i] == 'a' || ch[i] == 'e' || ch[i] == 'i' || ch[i] == 'o' || ch[i] == 'u' || ch[i] == 'A' || ch[i] == 'E' || ch[i] == 'I' || ch[i] == 'O' || ch[i] == 'U'){
            ch[i] = k;
        }
    }
    printf("%s",ch);
    return 0;
}