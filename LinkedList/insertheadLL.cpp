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

int main(){
    node* head = new node(5);
    inserthead(head , 10);
    inserthead(head , 50);
    inserthead(head , 20);
    cout<<head->data;
    return 0;
}
