#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
}*first=NULL;

void create(int A[], int n) {
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

//Iterative Way
Node * LinearSearch(Node *p,int key){
    while(p!=NULL){
        if(key==p->data){
            return p;
        }
        p = p->next;
    }
    return NULL;
}

//Recursive Way
Node * RLinearSearch(Node *p, int key){
    if(p==NULL){
        return NULL;
    }
    if(key==p->data){
        return p;
    }
    return RLinearSearch(p->next,key);
}

//Move To front Approach in Linear Search
Node * ILinearSearch(Node *p,int key){
    Node *q;
    while(p!=NULL){
        if(key==p->data){
            q->next = p->next;
            p->next = first;
            first = p;
            return p;
        }
        q=p;
        p = p->next;
    }
    return NULL;
}

int main() {
    Node *temp;
    int A[] = {3,5,7,9,10};
    create(A,5);

    Display(first);
    cout<<endl;
    temp = ILinearSearch(first,10);
    temp = ILinearSearch(first,5);
    if(temp){
        cout << "Key is found " << temp->data << endl;
    } else{
        cout << "Key is not found" << endl;
    }
    Display(first);
    return 0;
}