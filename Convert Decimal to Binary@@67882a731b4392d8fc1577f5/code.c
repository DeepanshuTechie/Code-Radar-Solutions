#include<stdio.h>
int func(int a){
    int num = 0,wo[20];
    while(a>0){
        num = a%2;
        wo += num;
        a/=2;
    }
    printf("%d",wo);

}

int main(){
    int c;
    scanf("%d",&c);
    func(c);
}