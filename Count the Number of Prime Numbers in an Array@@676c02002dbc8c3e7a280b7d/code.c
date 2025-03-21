#include<stdio.h>
#include<stdbool.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    int prime = false;
    int k  = 0;
    for(int i = 0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0;i<a;i++){
        for(int j = 2;j<arr[i];j++){
            if(arr[i]%j == 0){
                prime=false;
            }
            else{
                prime=true;
            }
            if(prime){
                k+=1;
            }
        }
    printf("%d",k);
    }
    return 0;
}