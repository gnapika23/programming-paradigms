#include<stdio.h>

int SearchNUmber(int *arr,int n,int num){
    if(n==0){
        return 0;
    }
    if(arr[n]==num){
        return 1;
    }else{
        return SearchNUmber(arr,n-1,num);
    }
}

int main(){
    int n;
    printf("enter the size of array");
    scanf("%d",&n);
    int arr[n];
    int i;
    for(i=0;i<n;i++){
        printf("arr[%d] " , i);
        scanf("%d",&arr[i]);
    }
    int num;
    printf("enter number to be searched ");
    scanf("%d",&num);

    SearchNUmber(arr,n,num);
    if(SearchNUmber(arr,n,num)){
        printf("true");
    }else{
        printf("the number is not present in the given list");
    }
}