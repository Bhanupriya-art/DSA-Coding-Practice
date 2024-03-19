#include<iostream>
using namespace std;

class Diagonal{
    private:
    int *A;
    int n;
    public:
    Diagonal(){
        n=2;
        A=new int [2];
    }
    Diagonal(int n){
        this->n = n;
        A = new int [n];
    }
    ~Diagonal(){
        delete [] A;
    }
    void Set(int i, int j, int x ){
        if(i == j){
            A[i-1] = x;
        }
    }
    int Get(int i, int j){
        if(i == j){
            return A[i-1];
        }
        return 0;
    }
    void Display(){
        for(int i=0;i<n;i++){
            for(int j=0; j < n; j++){
                if(i == j){
                    cout << A[i] <<" ";
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
    Diagonal D(d);

    int x;
    cout <<"Enter all Elements: ";
    for(int i= 1; i <=d;i++){
        for(int j = 1;j<=d;j++){
            cin >> x;
            D.Set(i,j,x);
        }
    }

    cout << "\nLower Triangular Matrix is: \n";
    D.Display();

}