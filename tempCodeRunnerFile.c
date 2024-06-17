#include<iostream>
using namespace std;

void options( ){
    cout<<"1.Addition"<<endl;
    cout<<"2.subtract"<<endl; 
    cout<<"3.Division"<<endl; 
    cout<<"4.Multiply"<<endl; 
    cout<<"5.Quit"<<endl; 
}

int addition( int a , int b ){
    return a+b;
}

int subtract( int a , int b ){
    return a-b;
}

int Division( int a , int b ){
    return a/b;
}

int Multiply( int a , int b ){
    return a*b;
}

int main(){
    options();
    int opt,a,b;
    cout<<"enter which operation you want to perform";
    cin>>opt;
    cout<<"enter any 2 numbers";
    cin>>a>>b;
    switch ( opt ){
        case 1:
        addition( a , b );
        case 2:
        subtract( a , b );
        case 3:
        Division( a , b );
        case 4:
        Multiply( a , b );
    }
    return 0;
}