#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v;
    cout << "Enter the elements of the vector: ";
    for(int i = 0; i < 6; i++){
        int element;
        cin>>element;
        v.push_back(element);
    }
    cout<<"Enter the element for whom you want to find total occurence: ";
    int x;
    cin>>x;

    int occurence = 0;
    for(int i = 0; i < v.size();i++){
        if(v[i]==x){
            occurence++;
        }
    }
    cout << "Total occurence of "<<x<<" is "<<occurence<<endl; 
}