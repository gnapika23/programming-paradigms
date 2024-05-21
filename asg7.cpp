#include <iostream>
using namespace std;

class matrix{
    int a[10][10],b[10][10],c[10][10],d[10][10],e[10][10],f[10][10],g[10][10]={0},x,y,i,j,k;
    public :
        void values();
        void transpose();
        void sum();
        void multiplication();
        void equal();
};

void matrix::values(){
    cout << "Enter the rows   "; cin >> x;
    cout << "Enter the columns   "; cin >> y;
    cout << "Enter elements of first matrix\n\n";
    for (i=1; i<=x; i++){
        for ( j=1; j<=y; j++){
            cin >> a[i][j];
        }
    }
    cout << "Enter elements of second matrix\n\n";
    for (i=1; i<=x; i++){
        for (j=1; j<=y; j++){
            cin >> c[i][j];
        }
    }
}
void matrix::sum(){
    cout << "Sum of Matrices 1 and 2 is\n";
    for (i=1; i<=x; i++){
        for ( j=1; j<=y; j++){
            e[i][j]=a[i][j]+c[i][j];
            cout << e[i][j] << "";
        }
        cout << endl;
    }
}
void matrix::multiplication(){
    cout<<"Multiplication of the matrix is\n";
    for(i=1;i<=x;i++){
        for(j=1;j<=y;j++){
            for(k=1;k<=y;k++){
                g[i][j] +=a[i][k]*c[k][j];
                
            }
            cout<< g[i][j] <<"";
        }
        cout <<endl; 
      }
 }
void matrix::equal(){
    cout<<"Checking whther the matrices are equal or not\n";
    int flag=1;
    for(i=1;i<=x;i++){
        for(j=1;j<=y;j++){
            if(a[i][j]!=b[i][j]){
                flag=0;
                break;
            }
            else
            flag=1;
        }
    }
    if(flag==1)
    cout<<"The matrices are equal\n"<<endl;
    else
    cout<<"The matrices are not equal\n"<<endl;
}
void matrix::transpose(){
    cout << "transpose of the first matrix is\n";
    for ( i=1; i<=x; i++){
        for ( j=1; j<=y; j++){
            b[i][j] = a[j][i];
            cout << b[i][j] << "";
        }
        cout << endl;
    }
    cout << "Transpose of the second matrix is\n";
    for ( i=1; i<=x; i++){
        for ( j=1; j<=y; j++){
            d[i][j] = c[j][i];
            cout << d[i][j] << "";
        }
        cout << endl;
    }   
}
int main(){
    int input;
    char ch;    
    matrix m;
    m.values();
    do{
    cout << "Enter your choice\n";
    cout << " 1. Sum of 1 and 2\n"<<"2.mulitplication of both 1 and 2\n"<<"3.matrices are equal are not\n" << " 4. Transpose of both 1 and 2\n";
    cin >> input;
    switch (input){
        case 1:
            m.sum();
            break;
        case 2:
            m.multiplication();
            break;
        case 3:
             m.equal();
             break;
        case 4:
            m.transpose();
            break;
    }
    cout << "\nDo another y/n?";
    cin >> ch;
    }
    while (ch!= 'n');
    cout << "\n";
    system ("pause");
return 0;
}