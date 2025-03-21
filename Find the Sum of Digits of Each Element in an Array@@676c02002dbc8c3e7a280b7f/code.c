#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int a = 0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    for(int j = 0;j<a;j++){
        int sum = 0;
        int temp = arr[i];
        while(temp>0){
            int num = temp%10;
            sum+=num;
            temp/=10;

        }
        printf("%d ",sum);
    }
    return 0;
}