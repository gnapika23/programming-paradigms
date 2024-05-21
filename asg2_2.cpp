#include<iostream>
using namespace std;


typedef struct mystack{
	int top;
	int* num;
    int size;
}mystack;

mystack* CreatemyStack(int capacity){
	mystack* stack=new mystack;
	stack->top=-1;
	stack->num=new int[capacity];
	stack->size=capacity;
	return stack;
}

void push(mystack* stack,int data){
	if(stack->top==stack->size-1) return;
	stack->top++;
	stack->num[stack->top]=data;
}

int pop(mystack* stack){
	if(stack->top==-1) return INT_MAX;
	int temp=stack->num[stack->top];
	stack->top--;
	return temp;
}

int GetMaxSize(mystack* stack){
	return stack->size;
}
int currentsize(mystack* stack){
	return stack->top+1;
}
void isempty(mystack* stack){
	if(stack->top==-1){
		cout<<"Stack is empty"<<endl;
	}
	else{
		cout<<"Stack is not empty"<<endl;
	}
}

int main(){

   int n;
   cout<<"Enter the size of the stack: "<<endl;
   cin>>n;
   mystack* S=CreatemyStack(n);
   mystack* ss=CreatemyStack(n);
   for(int i=0;i<n;i++){
   	int data;
   	cout<<"Enter the data to push into stack: "<<endl;
   	cin>>data;
   	push(S,data);
   }

   cout<<"Maxsize of stack:  "<<GetMaxSize(S)<<endl;
   cout<<"Current size of stack: "<<currentsize(S)<<endl;
   cout<<"Popped element of the stack: "<<pop(S)<<endl;
   isempty(S);

	
	return 0;

}