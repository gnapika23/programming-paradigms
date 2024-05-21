#define ll long long
#define pb push_back
#define F first
#define S second
#define I insert
#define vll vector<ll>
#define loo(i,n) for(long long i=0;i<n;i++)		
#include <iostream>
using namespace std;

template<typename T>
void swaping(T &x,T &y){
	T temp=x;
	x=y;
	y=temp;
}
typedef struct student{
	int roll;
	string name;
}student;

int main(){
	int a,b;
	float p,q;
	short d,e;
	double g,h;
	student A,B;
	cout<<"Enter the integers a and b respectively: "<<endl;
	cin>>a>>b;	
	cout<<"Before swappinf values of a,b:"<<a<<" "<<b<<endl;
	swaping(a,b);
	cout<<"After swapping: "<<a<<" "<<b<<endl;
	cout<<endl;



	cout<<"Enter floats p,q respectively: "<<endl;
	cin>>p>>q;
	swaping(p,q);
	cout<<"After swapping value of p:"<<p<<endl<<"value of q: "<<q<<endl;
	cout<<endl;

	cout<<"Enter shorts d,e respectively: "<<endl;
	cin>>d>>e;
	swaping(d,e);
	cout<<"After swapping value of d:"<<d<<endl<<"value of e: "<<e<<endl;
    cout<<endl;
	cout<<"Enter doubles g,h respectively: "<<endl;
	cin>>g>>h;
	swaping(g,h);
	cout<<"After swapping value of g:"<<g<<endl<<"value of h: "<<h<<endl;
    
    cout<<endl;


    A.roll=7;
    A.name="tony";
    B.roll=9;
    B.name="sandy";
    
    cout<<"Struct A before swap: "<<A.roll<<" "<<A.name<<endl;
    cout<<"Struct B before swap: "<<B.roll<<" "<<B.name<<endl;
    swaping(A,B);
    cout<<"After swapping: "<<endl;
    cout<<"Struct A: "<<A.roll<<" "<<A.name<<endl;
    cout<<"Struct B: "<<B.roll<<" "<<B.name<<endl;

}