#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    cout << "Enter the elements of the vector: ";
    for(int i = 0; i < 6; i++){
        int element;
        cin>>element;
        v.push_back(element);
    }
    cout<<"Enter from which number you want greater elements: ";
    int x;
    cin>>x;

    int count  = 0;
    for(int i = 0; i < v.size();i++){
        if(v[i]>x){
            count++;
        }
    }
    cout << "Total elements greater than "<<x<<" is "<<count<<endl;
}