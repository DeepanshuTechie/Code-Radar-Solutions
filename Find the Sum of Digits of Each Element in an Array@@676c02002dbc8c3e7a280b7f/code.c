#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i = 0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    for(int i  = 0;i<a;i++){
        int sum = 0;
        int temp = arr[i];
        if(temp<0){
            temp = -temp;
        }
        while(temp>0){
            int num = temp%10;
            sum+=num;
            temp/=10;
        }
        printf("%d ",sum);
        
    }
    return 0;
}