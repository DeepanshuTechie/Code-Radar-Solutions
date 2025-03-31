#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i = 0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    for(int j = 0;j<a;j++){
        int max = 0;
        int min = 0;
        if(arr[i]>max){
            max = arr[i];
        }
        else {
            min = arr[i];
        }
        printf("%d %d",min,max);
    }
    return 0;
}