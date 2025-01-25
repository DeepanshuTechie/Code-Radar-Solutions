#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if(a == b && b == c){
        printf("Equilateral");
    }
    else if((a == b && a!=c) ||( b == c && c!=a) ||( c == a && c!=b) ){
        printf("Isosceles");
    }
    else if(a != b && b != c && c != a){
        printf("Scalene");
    }
    return 0;
}