#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    if(a % 3 == 0 && a % 5 == 0){
        printf("Divisible by Both");
    }
    else if(a % 3 == 0 && a %5 != 0){
        printf("Divisible by 3");
    }
    else if(a %3 != 0 && a%5  == 0){
        printf("Divisible by 5");
    }
    else{
        printf("Not Divisible");
    }
}