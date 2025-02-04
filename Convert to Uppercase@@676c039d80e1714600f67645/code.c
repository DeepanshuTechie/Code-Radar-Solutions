#include <stdio.h>
#include<string.h>
int main(){
    char st[15];
    scanf("%s",st);
    int l = strlen(st);
    for(int i= 0;i<l;i++){
        if(st[i] >= 'a' && st[i] <= 'z'){
            st[i] -= 32;
        }
        // if(st[i] >= 'A' && st[i] <= 'Z'){
        //     st[i] += 32;
        // }
    }
    printf("%s",st);
    return 0;
}