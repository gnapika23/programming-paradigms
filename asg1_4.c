#include<stdio.h>

int max(int a ,int arr[a] , int large ){
    if(a==0){
        return large;
    }
        if(arr[a]>large){
            large = arr[a];
        }
        max(a , arr[(a-1)] , large);
        return large;
}

int main(){
    printf("\nthe largest number in n integers \n");
    int n;
    printf("enter the value of n \n");
    scanf("%d",&n);
    int arr[n];
    int i;
    int largest;
    for(i = 0 ; i<n ; i++){
        printf("enter the %d element ",i+1);
        scanf("%d",&arr[i]);
    }
    if(n==0){
        printf("empty");
    }else{
        largest = arr[0];
        max(n , arr[n],largest);

    }
    
    //max(n ,arr[n]);
    printf("the largest among %d integers is %d" ,n , max);
    
}