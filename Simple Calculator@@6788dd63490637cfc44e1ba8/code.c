#include <stdio.h>
int main(){
    float a,b;
    char c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%c",&c);
    if(c == '+'){
        printf("%d",a+b);
    }
    else if(c == '-'){
        printf("%d",a-b);
    }
    else if(c == '/'){
        printf("%d",a/b);
    }
    else if(c == '*'){
        printf("%d",a*b);
    }
    return 0;
}