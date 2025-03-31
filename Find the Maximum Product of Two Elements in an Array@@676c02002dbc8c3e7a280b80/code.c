#include<stdio.h<
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i = 0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int min = arr[0];
    for(int i = 0;i<a;i++){
        for(int j = i+1;j<a;j++){
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("%d",arr[0]*arr[1]);
}