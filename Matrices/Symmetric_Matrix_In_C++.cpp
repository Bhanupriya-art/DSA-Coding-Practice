#include<iostream>
using namespace std;

class Symmetric{
    private:
    int *A;
    int n;
    public:
    Symmetric(){
        n=2;
        A=new int [2*(2+1)/2];
    }
    Symmetric(int n){
        this->n = n;
        A = new int [n*(n+1)/2];
    }
    ~Symmetric(){
        delete [] A;
    }
    //Row Major Formula
    void Set(int i, int j, int x ){
        if(i >= j){
            A[i*(i-1)/2+j-1] = x;
        }
        else{
            A[j*(j-1)/2+i-1] = x;
        }
    }
    int Get(int i, int j){
        if(i >= j){
            return A[i*(i-1)/2+j-1];
        }
        return A[j*(j-1)/2+i-1];
    }
    void Display(){
        for(int i=1;i<=n;i++){
            for(int j=1; j <= n; j++){
                if(i >= j){
                    cout << A[i*(i-1)/2+j-1] <<" ";
                }
                else 
                    cout << A[j*(j-1)/2+i-1] << " ";
            }
            cout << endl;
        }
    }
};

int main(){
    int d,i,j;
    cout << "Enter Dimension: ";
    cin >> d;
    Symmetric S(d);

    int x;
    cout <<"Enter all Elements: ";
    for( i= 1; i <=d;i++){
        for( j = 1;j<=d;j++){
            cin >> x;
            S.Set(i,j,x);
        }
    }

    for(i = 1; i <= d; i++){
        for(j = 1; j<=d; j++){
            if(S.Get(i,j)!=S.Get(j,i)){
                cout << "\nThe matrix is not symmetric."<<endl;
            }
        }
    }
    cout << "\nSymmetric Matric is: "<<endl;
    S.Display();

}