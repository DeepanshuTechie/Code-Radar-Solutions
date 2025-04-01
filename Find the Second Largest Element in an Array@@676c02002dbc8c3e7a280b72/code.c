#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int l = 0;l<a;l++){
        scanf("%d",&arr[l]);
    }
    for(int i = 0;i<a;i++){
        for(int j = i+1;j<a;j++){
            if(arr[i]<arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    if(arr[1] == arr[2] || arr[1] == arr[3]){
        printf(-1);
    }
    else{
        printf("%d",arr[1]);
    }
        
    
    return 0;
}
