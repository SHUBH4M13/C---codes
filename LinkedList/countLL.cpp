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
    cout<<"count : "<<count<<endl;
}
int main(){
    node* head = new node(5);
    inserthead(head , 10);
    inserthead(head , 50);
    inserthead(head , 20);
    count(head);
    return 0;
}
