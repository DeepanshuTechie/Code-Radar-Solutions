#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int n = 0;
    if(a == 2){
        printf("Prime");
        break;
    }
    for(int i = 2;i<a;i++){
        if(a%i == 0){
            n+=1;
        }
        else{
            n = 0;
        }
    }
    if(n){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    return 0;
}