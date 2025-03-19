#include<stdio.h>
int fibonacciSeries(int a){
    int b = 0,c = 1;
    printf("%d ",b);
    printf("%d ",c);
    for(int i = 0;i<a-2;i++){
        int d = b+c;
        printf("%d ",d);
        b = c;
        c = d;
    }
}

int main(){
    int n;
    scanf("%d",&n);
    if(n<=0){
        printf("Invalid input\n");
        return 0;
    }
    fibonacciSeries(n);
    return 0;
}