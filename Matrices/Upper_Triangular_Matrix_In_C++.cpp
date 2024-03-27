#include<iostream>
using namespace std;

class UpperTriangular{
    private:
    int *A;
    int n;
    public:
    UpperTriangular(){
        n = 2;
        A = new int[2*(2+1)/2];
    }
    UpperTriangular(int n){
        this->n = n;
        A = new int[n*(n+1)/2];
    }
    ~UpperTriangular(){
        delete []A;
    }
    //Row Major Formula
    void Set(int i, int j, int x){
        if(i<=j){
            A[n*(i-1)+(i-2)*(i-1)/2 + j - i] = x;
        }
    }
    int Get(int i, int j){
        if(i<=j){
            return A[n*(i-1)+(i-2)*(i-1)/2 + j - i];
        }
        else return 0;
    }

    void Display(){
        int i,j;
        for(i = 1; i <= n; i++){
            for(j = 1; j <= n; j++){
                if(i<=j){
                    cout << A[n*(i-1)+(i-2)*(i-1)/2 + j - i] << " ";
                }else{
                    cout <<"0 ";
                }
            }
            cout << endl;
        }
    }

    void SetColumn(int i, int j, int x){
        if(i<=j){
            A[j*(j-1)/2 + i - 1] = x;
        }
    }
    int GetColumn(int i, int j){
        if(i<=j){
            return A[j*(j-1)/2 + i - 1];
        }
        else return 0;
    }

    void DisplayColumn(){
        int i,j;
        for(i = 1; i <= n; i++){
            for(j = 1; j <= n; j++){
                if(i<=j){
                    cout << A[j*(j-1)/2 + i - 1] << " ";
                }else{
                    cout <<"0 ";
                }
            }
            cout << endl;
        }
    }
};

int main(){
    int d;
    cout << "Enter Dimension For UpperTriangular Matrix: ";
    cin >> d;

    UpperTriangular U(d);
    int x;
    cout << "Enter UpperTriangular Elements: ";
    for(int  i = 1; i <= d;i++){
        for(int j = 1; j <= d;j++){
            cin >> x;
            U.SetColumn(i,j,x);
        }
    }

    cout << "\nUpper Triangulr Matrix is: "<<endl;
    U.DisplayColumn();
}