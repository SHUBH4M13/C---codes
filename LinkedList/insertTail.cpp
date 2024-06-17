#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* link;
    node( int newdata ){
        data = newdata;
        link = nullptr;
    }
};

void inserthead( node* &head , int a){
    node* n1 = new node(a);
    n1->link = head;
    head = n1;
}

void insertTail( node* &head , int b){
    node* n2 = new node(b);
    if (head == nullptr) {
        head = n2;
    }
    node* temp1 = head; 
    while( temp1-> link != nullptr ){
        temp1 = temp1->link;
    }
    temp1->link = n2;
}

void count( node* &head){
    int count = 0;
    if( head == nullptr){
        cout<<"linked list is empty";
    }
    node* temp = head;
    while( temp != nullptr ){
        count++;
        cout<<temp->data<<" ";
        temp = temp->link;
    }
    cout<<endl;
    cout<<"count : "<<count<<endl;
}

int main(){
    node* head = new node(5);
    inserthead(head , 20);
    insertTail(head , 69);
    count(head);
    return 0;
}
