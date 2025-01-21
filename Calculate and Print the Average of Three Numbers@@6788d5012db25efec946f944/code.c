#include <stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    // printf("Average: %.2f",(a+b+c)/3);
    int d = (float)(a+b+c)/3;
    printf("%.2f",d);
}