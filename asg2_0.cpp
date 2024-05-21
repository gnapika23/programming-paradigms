	
#include <iostream>
using namespace std;

typedef struct student{
	string name;
	int roll_number;
	int year;
	string department;
}student;

void printsudentdata(student studentdata[],int N){
	cout<<"name\t-\troll number\t-\tdepartment\t-\tyear"<<endl;

	for(int i=0;i<N;i++){
		 cout<<studentdata[i].name<<"\t\t"<<studentdata[i].roll_number<<"\t\t\t"<<studentdata[i].department<<"\t\t\t"<<studentdata[i].year<<endl;
	}
}
void readstudentdata(student studentdata[],int i,string name,string department,int roll_number,int year){
    cout<<"enter name of the student"<<endl;
    cin>>name;
	studentdata[i].name=name;
    cout<<"enter roll number of the student"<<endl;
    cin>>roll_number;
	studentdata[i].roll_number=roll_number;
    cout<<"enter department of the student"<<endl;
    cin>>department;
	studentdata[i].department=department;
    cout<<"enter year of the student"<<endl;
    cin>>year;
	studentdata[i].year=year;
}

int main(){
 
  int N;
  cout<<"Enter the no of students: "<<endl;
  cin>>N;
	student studentdata[N];
	for(int i=0;i<N;i++){
		string name,department;
		int year,roll_number;
		readstudentdata(studentdata,i,name,department,roll_number,year);
        cout<<endl;
	}
	printsudentdata(studentdata,N);
	return 0;

}


