#include <iostream>
using namespace std;

int  main(){
    int arr[5] = {1,2,3,4,5};
    int arr2[5];
    int arr3[5] = {1,2,3};
    int arr4[5] = {0};
    int arr5[] = {1,2,3,4,5,6,7,8,9,10};

    for(int i = 0; i < 5; i++){
        cout <<arr[i]<<" ";
    }
    cout << endl;
    for(int i = 0; i < 5; i++){
        cout << arr3[i]<<" ";
    }
    cout << endl;
    for(int i = 0; i < 5; i++){
        cout << arr4[i]<<" ";
    }
    cout << endl;
    for(int i = 0; i < 5; i++){
        cout << arr5[i]<<" ";
    }
}

