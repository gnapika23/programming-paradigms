#include<stdio.h>

int sumOfNIntegres(int i){
    if(i==0 || i==1){
        return 1;
    }else{
        int sum = i + sumOfNIntegres(i-1);
        return sum;
    }
}

int main(){
    int a;
    printf("\nenter the number\n");
    scanf("%d",&a);
    printf("the sum of %d integers is %d " , a , sumOfNIntegres(a));
}
