#include<stdio.h>

int reverse(int *arr,int n){
    if(n==0){
        return 0;
    }
    printf("%d\n",arr[n-1]);
    return reverse(arr,n-1);
}

int main(){
    int n;
    printf("enter the size of array ");
    scanf("%d",&n);
    int arr[n];
    int i;
    for(i=0;i<n;i++){
        printf("arr[%d] " , i);
        scanf("%d",&arr[i]);
    }
    reverse(arr,n);

}