#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int n = 0;
    
    for(int i = 2;i<a;i++){
        if(a%i == 0){
            n+=1;
            break;
        }
        else{
            n = 0;
        }
    }
    if(n){
        printf("Not Prime");
    }
    else{
        printf("Prime");
    }
    return 0;
}