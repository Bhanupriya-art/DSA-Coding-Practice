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
int CountingNodes(Node *p){
    int count = 0;
    while(p!=NULL){
        count++;
        p = p->next;
    }
    return count;
}

//Recursive Way
int CountingNodesRecursive(Node *p){
    if(p==NULL){
        return 0;
    }
    else{
        return CountingNodesRecursive(p->next)+1;
    }
}


int main() {
    int A[] = {3,5,7,9,10};
    create(A,5);

    Display(first);
    cout << endl;
    cout << "Number of Nodes in Linked List: " << CountingNodes(first) << endl;
    return 0;
}