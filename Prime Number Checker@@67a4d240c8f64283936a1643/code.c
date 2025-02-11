#include <stdio.h>
#include<booltype.c>

bool isprime(num);
bool isprime(num){
    for(int i = 2;i<num;i++){
        if(num%i == 0){
            return true;
            break;
        }
        else{
            return false;
        }
    }
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--) {
        int num;
        scanf("%d",&num);
        printf("%d\n",isprime(num));
    }
    return 0;
}

