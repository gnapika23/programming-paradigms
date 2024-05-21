#include<stdio.h>

int factorial(int i){
    if(i==0 || i==1){
        return 1;
    }else{
        int fac = i * factorial(i-1);
        return fac;
    }
}

int main(){
    int a;
    printf("\nenter the number\n");
    scanf("%d",&a);
    printf("the factorial of %d is %d " , a , factorial(a));
}
