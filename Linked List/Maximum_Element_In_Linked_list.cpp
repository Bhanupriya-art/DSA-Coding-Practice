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

//Iterative Way
int MaximumElement(Node *p){
    int max = INT32_MIN;
    while(p){
        if(p->data>max){
            max = p->data;
        }
        p=p->next;
    }
    return max;
}

//Recursive Way
int RMaximumElement(Node *p){
    int x = 0;
    if(p==0){
        return INT32_MIN;
    }
    x = RMaximumElement(p->next);
    if(x>p->data){
        return x;
    }
    else{
        return p->data;
    }
}


int main() {
    int A[] = {3,5,7,9,10,556};
    create(A,6);

    Display(first);
    cout<<endl;
    cout<<"Maximum Element in Linked List is: "<<RMaximumElement(first);
    return 0;
}