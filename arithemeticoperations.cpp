#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter number here:"<<endl;
    cin>>a; //endl kaam nhi krta
    cin>>b;
    int sum,minus,div,modulus;
    sum = a + b;
    minus = a - b;
    div = a/b;
    modulus = a%b;
    cout<<"answers"<<endl<<sum<<endl<<div<<endl<<minus<<endl<<modulus;
    return 0;
}