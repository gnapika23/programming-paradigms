#include<iostream>
using namespace std;

typedef struct student{
        char name[50];
        int roll_number;
        char department[50];
}student;

void ReadStudentsData(student &std[],int i){
    cout<<"enter the name of the student"<<endl;
    cin>>std[i].name;
    cout<<"enter the roll number of the student"<<endl;
    cin>>std[i].roll_number;
    cout<<"enter the department of the student"<<endl;
    cin>>std[i].department;
}

void PrintStudentsData(student &std[],i){
    cout<<"name\t-\trollnumber\t-\tdepartment"<<endl;
    cout<<std[i].name<<"\t"<<std[i].roll_number<<"\t"<<std[i].department<<endl;
}

int main(){
    int n;
    cout<<"enter the number of students"<<endl;
    cin>>n;
    student[n];
    for(int j=0;j<n;j++){
        ReadStudentsData(student[j],j);
    }
    for(int j=0;j<n;j++){
        PrintStudentsData(student[j],j);
    }

}