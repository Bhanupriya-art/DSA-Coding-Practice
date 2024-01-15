#include<iostream>
using namespace std;
int main(){
    int A[3][4]={{1,2,3,4},{5,6,7,8},{9,2,3,4}};

    int*B[3];
    B[0]=new int[4];
    B[1]=new int[4];
    B[2]=new int[4];

    int **C;
    int i,j;

    C=new int*[3];
    C[0]=new int[4];
    C[1]=new int[4];
    C[2]=new int[4];

    cout<<"2D array of A is:-";
    cout<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Enter 12 elements for 2D array of B :-";
    cout<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cin>>B[i][j];
        }
    }
    cout<<"2D array of B is:-";
    cout<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<B[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Enter 12 elements for 2D array of C :-";
    cout<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cin>>C[i][j];
        }
    }
    cout<<"2D array of C is:-";
    cout<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }



}
