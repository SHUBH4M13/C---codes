#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node* prev;

};

void InsertHEAD( node* &head , int val ){
    node* inTemp = new node(); 
    inTemp->data = val;
    inTemp->next = head;
    inTemp->prev = nullptr;
    head->prev = inTemp;
    head = inTemp;
}

void InsertMid( node* &head , int position , int value ){
    node* toBeAdded = new node();
    node* trav = head;
    node* temp6 = nullptr;
    toBeAdded->data = value;
    int count = 1;
    while( trav->next != nullptr){
        if( count == position - 1 ){
            break;
        }
        count++;
        trav = trav->next;
    }
        if( count == position ){
            toBeAdded->next = trav;
            trav->prev = toBeAdded;
            temp6 = trav -> prev;
            temp6->next = toBeAdded;
            toBeAdded->prev = temp6; 
        }
}

void InsertEnd( node* &head , int val ){
    node* EndTemp = new node();
    node* trav = head;
    EndTemp -> data = val;
    EndTemp -> next = nullptr;
    while( trav->next != nullptr ){
        trav = trav->next;
    }
    trav->next = EndTemp;
    EndTemp->prev = trav;
}

void dltHead(node* &head){
    node* dltTemp = head;
    head = head->next;
    head->prev = nullptr;
    dltTemp->next = nullptr;
    delete(dltTemp);
}

void dltMID( node* &head , int postion ){
    node* dltTemp4 = head;
    node* prev1 = nullptr;
    node* prev2 = nullptr;

    int count = 1 ;
    while( dltTemp4->next != nullptr){
        if(count == postion - 1 ){
            prev1 = dltTemp4->prev;
            prev1->next = dltTemp4->next; 
            prev2 = dltTemp4->next;
            prev2->prev = prev1;
            delete(dltTemp4);
        }
        dltTemp4 = dltTemp4->next;
        count++;
    }
}

void dltTail( node* &head){
    node* dltTemp2 = head;
    node* dltTemp3 = nullptr;
    while( dltTemp2->next != nullptr){
        dltTemp2 = dltTemp2->next;
    }
    dltTemp3 = dltTemp2->prev;
    dltTemp3->next = nullptr;
    dltTemp2->prev = nullptr;
    delete(dltTemp3);
}

void frontprint(node* &head){
    node* temp = head;
    while( temp != nullptr ){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void printback( node* &tail){
    node* temp1 = tail;
    while( temp1 != nullptr ){
        cout<<temp1->data<<" ";
        temp1=temp1->prev;
    }
}

int main(){
    
    node* head;
    node* tail;

    //adding 1st node only
    node* n1 = new node();
    n1->data = 10;
    n1->next = nullptr;
    n1->prev = nullptr;
    head = n1;
    tail = n1;
    
    //adding 2nd node 
    node* n2 = new node();
    n2->data = 20;
    n2->next = nullptr;
    n2->prev = tail; // tail is n1 at this point
    tail->next = n2;
    tail = n2;
    
    //adding 3rd node 
    node* n3 = new node();
    n3->data = 12;
    n3->next = nullptr;
    n3->prev = tail; // tail is n2 at this point
    tail->next = n3;
    tail = n3;

    //adding 4th node 
    node* n4 = new node();
    n4->data = 92;
    n4->next = nullptr;
    n4->prev = tail; // tail is n3 at this point
    tail->next = n4;
    tail = n4;
    InsertHEAD(head , 99 );
    InsertEnd( head , 28 );
    InsertMid( head , 3 , 0 );
   // dltHead(head);
   // dltTail(head);
   dltMID( head , 3);
   frontprint(head);
    //printback(tail);
    return 0;
}
