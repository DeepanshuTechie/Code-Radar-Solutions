#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i = 1;i<=N;i++){
        scanf("%d",&arr[i]);
    }
    int min = arr[0];
    int max = arr[0];
    for(int i = 0;i<N;i++){
        if(arr[i]<min){
            min = arr[i];
        }
    for(int i = 0;i<N;i++){
        if(max<arr[i]){
            max = arr[i];
        }

    }
    printf("%d %d",min,max);
}