#include<iostream>

using namespace std;

class student
{
    public :
    string name;
    int age;
    string department;
    int year;

    void readstudentdata(string name,int age,string dept,int year)
    {
        this->name = name;
        this->age = age;
        this->department = dept;
        this->year = year;
    }
    void printdata()
    {
        cout<<"Name - "<<name<<endl;
        cout<<"Age - "<<age<<endl;
        cout<<"Department - "<<department<<endl;
        cout<<"Year - "<<year<<endl;
        cout<<"----------"<<endl;
    }
};


int main()
{
    long long n;
    cout<<"Enter total number of student :";
    cin>>n;
    student grp[n];
    for(int i=0;i<n;i++)
    {
        string name;
        string dept;
        int age,year;
        cout<<"Enter the name of the student :";
        cin>>name;
        cout<<"Enter the age of the student :";
        cin>>age;
        cout<<"Enter the department of the student :";
        cin>>dept;
        cout<<"Enter the year of the student :";
        cin>>year;
        cout<<endl;
        grp[i].readstudentdata(name,age,dept,year);

    }
    for(int i=0;i<n;i++)
    {
        grp[i].printdata();
    }
    return 0;
}