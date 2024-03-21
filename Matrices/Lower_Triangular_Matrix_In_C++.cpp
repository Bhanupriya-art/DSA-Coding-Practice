#include<iostream>
using namespace std;

class LowerTriangular{
    private:
    int *A;
    int n;
    public:
    LowerTriangular(){
        n=2;
        A=new int [2*(2+1)/2];
    }
    LowerTriangular(int n){
        this->n = n;
        A = new int [n*(n+1)/2];
    }
    ~LowerTriangular(){
        delete [] A;
    }
    //Row Major Formula
    void Set(int i, int j, int x ){
        if(i >= j){
            A[i*(i-1)/2+j-1] = x;
        }
    }
    int Get(int i, int j){
        if(i >= j){
            return A[i*(i-1)/2+j-1];
        }
        return 0;
    }
    void Display(){
        for(int i=1;i<=n;i++){
            for(int j=1; j <= n; j++){
                if(i >= j){
                    cout << A[i*(i-1)/2+j-1] <<" ";
                }
                else 
                    cout << "0 ";
            }
            cout << endl;
        }
    }
    int GetDimension(){
        return n;
    }

    //Column Major Formula
    void SetColumn(int i, int j, int x ){
        if(i >= j){
            A[n*(j-1)-(j-2)*(j-2)/2+i-j] = x;
        }
    }
    int GetColumn(int i, int j){
        if(i >= j){
            return A[n*(j-1)-(j-2)*(j-2)/2+i-j];
        }
        return 0;
    }
    void DisplayColumn(){
        for(int i=1;i<=n;i++){
            for(int j=1; j <= n; j++){
                if(i >= j){
                    cout << A[n*(j-1)-(j-2)*(j-2)/2+i-j] <<" ";
                }
                else 
                    cout << "0 ";
            }
            cout << endl;
        }
    }
};

int main(){
    int d;
    cout << "Enter Dimension: ";
    cin >> d;
    LowerTriangular L(d);

    int x;
    cout <<"Enter all Elements: ";
    for(int i= 1; i <=d;i++){
        for(int j = 1;j<=d;j++){
            cin >> x;
            L.SetColumn(i,j,x);
        }
    }

    cout << "\nLower Triangular Matrix is: \n";
    L.DisplayColumn();

}