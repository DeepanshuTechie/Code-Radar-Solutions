#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    int eve = 0,odd = 0;
    for(int i = 0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0;i<a;i++){
        if(arr[i]%2 == 0){
            eve += 1;
        }
        else{
            odd+=1;
        }
    printf("%d %d",eve,odd);
    }
    return 0;
}