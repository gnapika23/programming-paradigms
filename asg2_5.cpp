#define ll long long
#define pb push_back
#define F first
#define S second
#define I insert
#define vll vector<ll>
#define loo(i,n) for(long long i=0;i<n;i++)		
#include <iostream>
using namespace std;

template <typename T>
struct myStack {
    T* data;
    int size;
    int capacity;
    myStack(int capa) : size(0), capacity(capa) {
        data = new T[capacity];
    }
    void push(T element) {
        if (size == capacity) {
            throw std::out_of_range("Stack is full.");
        }
        data[size++] = element;
    }
    T pop(){
        if (size == 0) {
            throw std::out_of_range("Stack is empty.");
        }
        T element = data[--size];
        return element;
    }
    T top(){
        if (size == 0) {
            throw std::out_of_range("Stack is empty.");
        }
        return data[size - 1];
    }
    bool empty(){
        return size == 0;
    }
};

int main(){
	myStack<int>s1(7);
	s1.push(5);
	s1.push(4);
	int a=s1.pop();
	cout<<a<<endl;

	//For float
	myStack<float>s2(5);
	s2.push(3.141);
	s2.push(4.56);
	float f=s2.pop();
	cout<<f<<endl;
	
	return 0;
}