#include<iostream>
using namespace std;
int main(){
    int a = 2 , b = 4;
    cout<<"without swap "<<a<<" "<<b;
    a  = a + b;
    b  = a - b;
    a =  a - b;
    cout<<"swap "<<a<<" "<<b;
    return 0;
}