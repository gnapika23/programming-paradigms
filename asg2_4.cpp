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
void Bsort(T arr[],ll n){
	loo(i,n-1){
		for(ll j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				swap(arr[j],arr[j+1]);
			}
		}
	}

}

int main(){
 

      cout<<"Enter 1 to test for int data type"<<endl;
      cout<<"Enter 2 to test for float data type"<<endl;
      cout<<"Enter 3 to test for short data type"<<endl;
      cout<<"Enter 4 to test for double data type"<<endl;
      ll f;
      cin>>f;
      if(f==1){
      	ll n;
      	cout<<"Enter the size of the int array: "<<endl;
      	cin>>n;
      	cout<<"Enter array elements: "<<endl;
      	ll arr[n];
      	loo(i,n){
      		cin>>arr[i];
      	}
      	Bsort(arr,n);
      	cout<<"After sorting: "<<endl;
      	loo(i,n){
      		cout<<arr[i]<<" ";
      	}
      	cout<<endl;

      }
      else if(f==2){
      	ll n;
      	cout<<"Enter the size of the float array: "<<endl;
      	cin>>n;
      	cout<<"Enter array elements: "<<endl;
      	float arr[n];
      	loo(i,n){
      		cin>>arr[i];
      	}
      	Bsort(arr,n);
      	cout<<"After sorting: "<<endl;
      	loo(i,n){
      		cout<<arr[i]<<" ";
      	}
      	cout<<endl;
      }
      else if(f==3){
      	ll n;
      	cout<<"Enter the size of the short array: "<<endl;
      	cin>>n;
      	cout<<"Enter array elements: "<<endl;
      	short arr[n];
      	loo(i,n){
      		cin>>arr[i];
      	}
      	Bsort(arr,n);
      	cout<<"After sorting: "<<endl;
      	loo(i,n){
      		cout<<arr[i]<<" ";
      	}
      	cout<<endl;
      }
      else if(f==4){
      	ll n;
      	cout<<"Enter the size of the double array: "<<endl;
      	cin>>n;
      	cout<<"Enter array elements: "<<endl;
      	double arr[n];
      	loo(i,n){
      		cin>>arr[i];
      	}
      	Bsort(arr,n);
      	cout<<"After sorting: "<<endl;
      	loo(i,n){
      		cout<<arr[i]<<" ";
      	}
      	cout<<endl;
      }
      
	return 0;

}
