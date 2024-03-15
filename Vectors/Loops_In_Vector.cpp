#include<iostream>
#include<vector>
using namespace std;


int main(){
    vector<int> v;
    //For loop
    for(int i = 0;i < 5;i++){
        int element;
        cin>>element;
        v.push_back(element);
    }
    for(int i = 0; i < v.size();i++){
        cout<<v[i]<<" ";
    }
    cout << endl;

    v.insert(v.begin()+2,6);

    //While loop
    int index = 0;
    while(index<v.size()){
        cout<<v[index]<<" ";
        index++;
    }
    cout << endl;

    v.erase(v.end()-2);
    for(int i = 0; i < v.size();i++){
        cout<<v[i]<<" ";
    }
}
