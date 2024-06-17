#include<iostream>
using namespace std;
int main(){
    int m;
    cin>>m;
    if( m >= 80 && m <= 100){
        cout<<"A";
    }
    else if( m >= 60 && m < 80){
        cout<<"B";
    }
    else if( m >=40 && m < 60){
        cout<<"C";
    }
    else if( m >= 30 && m < 40){
        cout<<"D";
    }
    else if( m > 100 ){
        cout<<"enter marks in range of 1-100";
    }
    else{
        cout<<"Fail";
    }
    return 0;
}