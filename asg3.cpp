#include<iostream>

using namespace std;

template <typename T>
class myStack{
private:
	int top;
	T* elements;
	int size;
public:	
myStack(int size){
	this->size=size;
	this->top=-1;
	this->elements=new T[size];
}	
void push(T data){
	if(this->top==this->size-1){
		cout<<"OVERFLOW"<<endl;
		return;
	}
	top++;
	this->elements[top]=data;
}
void pop(T& item){
	if(this->top==-1){
		cout<<"UNDERFLOW"<<endl;
		return ;
	}
	T temp=this->elements[top];
	item=temp;
	top--;
}
int maxsize(){
	return this->size;
}
int currentsize(){
	return this->top+1;
}
void isempty(){
	if(this->top==-1){
		cout<<"Stack is empty"<<endl;
		return;
	}
	cout<<"Stack is not empty"<<endl;
}
void display(){
	int dd=this->top;
	while(dd!=-1){
		cout<<this->elements[dd]<<endl;
		dd--;
	}
}
};

struct student{
	string name;
	int age;
};



int main()
{
 
	   long long k;
	   myStack<float>ss(4);
	   cout<<"choose a datatype option: ";
	   cin>>k;
	   switch(k){
	   case 0:{
	   	cout<<"1. Int datatype: "<<endl;
	   	cout<<"2. Short datatype: "<<endl;
	   	cout<<"3. Float datatype: "<<endl;
	   	cout<<"4. Double datatype: "<<endl;
	   	cout<<"5. Struct datatype: "<<endl;
	   	cout<<"6. Exit "<<endl;
	   }
	   case 1:{
	   	long long n;
	   	cout<<"Enter the size of integr stack: ";
	   	cin>>n;
	   	myStack<int>si(n);
	   	cout<<"Push the data until you give data -999 :"<<endl;
	   	int data=0;
	   	while(data!=-999){
	   		cin>>data;
	   		if(data!=-999) si.push(data);
	   		else break;
	   	}
	   	si.display();
	   	si.isempty();
	   	break;
	   }
	   case 2:{
	   	cout<<"SHORT STACK"<<endl;
	   	long long n;
	   	cout<<"Enter the size of short stack: ";
	   	cin>>n;
	   	myStack<short>ss(n);
	   	cout<<"Push the data until you give data -999 :"<<endl;
	   	short data=0;
	   	while(data!=-199){
	   		cin>>data;
	   		if(data!=-199) ss.push(data);
	   		else break;
	   	}
	   	ss.display();
	   	ss.isempty();
	   	break;

	   }
	   case 3:{
	   	cout<<"FLOAT STACK"<<endl;
	   	long long n;
	   	cout<<"Enter the size of float stack: ";
	   	cin>>n;
	   	myStack<float>sf(n);
	   	cout<<"Push the data until you give data -999 :"<<endl;
	   	float data=0;
	   	while(data!=-999.0){
	   		cin>>data;
	   		if(data!=-999.0) sf.push(data);
	   		else break;
	   	}
	   	sf.display();
	   	sf.isempty();
	   	break;
	   }
	  case 4:{
	  	cout<<"DOUBLE STACK"<<endl;
	   	long long n;
	   	cout<<"Enter the size of double stack: ";
	   	cin>>n;
	   	myStack<double>si(n);
	   	cout<<"Push the data until you give data -999 :"<<endl;
	   	double data=0;
	   	while(data!=-999){
	   		cin>>data;
	   		if(data!=-999) si.push(data);
	   		else break;
	   	}
	   	si.display();
	   	si.isempty();
	   	break;
	  }
	  case 5:{
	  	cout<<"STRUCT STACK"<<endl;
	  	struct student A={"s",6},B={"t",7},C;
	  	myStack<student>ss(2);
	  	ss.push(A);
	  	ss.push(B);
	  	ss.isempty();

	  	ss.pop(C);
	  	cout<<C.name<<" "<<C.age<<endl;
	  	//ss.isempty();
	  	//ss.display();
	  	break;
	  }
	case 6:{
		return 0;
	}

	   }
	


	return 0;

}