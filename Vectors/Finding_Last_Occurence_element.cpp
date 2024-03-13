#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v(6);
    cout << "Enter the elements of the vector: ";
    for(int i = 0; i < 6; i++){
        cin>>v[i];
    }
    cout << "Enter the element for whom you want to fin last occurence: ";
    int x;
    cin>>x;

    int occurene = -1;
    //Method 1
    // for(int i = 0;i<v.size();i++){
    //     if(v[i]==x){
    //         occurene = i;
    //     }
    // }

    //Method 2
    for(int i = v.size()-1;i>=0;i--){
        if(v[i]==x){
            occurene = i;
            break;
        }
    }
    cout << "Last occurence of "<<x<<" is at index "<<occurene<<endl;
}