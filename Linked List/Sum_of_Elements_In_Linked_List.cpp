#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
}*first=NULL;

void create(int A[],int n){
    int i;
    Node *temp,*last;
    first = new Node;
    first->data = A[0];
    first->next = NULL;
    last = first;

    for(i = 1; i < n; i++){
        temp = new Node;
        temp->data = A[i];
        temp->next = NULL;
        last->next = temp;
        last = temp;
    }
}

void Display(Node *p){
    cout << "Linked List is: ";
    while(p!=NULL){
        cout<<p->data<<" ";
        p = p->next;
    }
}

//Iterative way
int  Sum(Node *p){
    int sum = 0;
    while(p){
        sum = sum + p->data;
        p = p->next;
    }
    return sum;
}

//Recursive way
int RSum(Node *p){
    if(p==NULL){
        return 0;
    }
    else{
        return RSum(p->next)+p->data;
    }

}


int main() {
    int A[] = {3,5,7,9,10};
    create(A,5);

    Display(first);
    cout << endl;
    cout << "Sum of Elements in Linked List: " << RSum(first) << endl;
    return 0;
}