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

//Recursive way
void Rdisplay(Node *p){
    if(p!=NULL){
        cout<<p->data<<" ";
        Rdisplay(p->next);
    }
}

//To reverse we can simply make change in recursive function
void Reversedisplay(Node *p){
    if(p!=NULL){
        Reversedisplay(p->next);
        cout<<p->data<<" ";
    }
}

int main() {
    int A[] = {3,5,7,9,10};
    create(A,5);

    Rdisplay(first);
    return 0;
}