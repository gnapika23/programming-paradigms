#include<stdio.h>

int hcf(int n1, int n2) {
	if (n2 == 0){
		return n1;
    }
	else {
        return hcf(n2, n1 % n2); 
    }
}

int main(){
    int n1,n2,n;
    printf("enter the value of n1 ");
    scanf("%d",&n1);
    printf("enter the value of n2 ");
    scanf("%d",&n2);
    hcf(n1,n2);
    printf("the hcf of %d and %d is %d", n1, n2 , hcf(n1,n2));
}