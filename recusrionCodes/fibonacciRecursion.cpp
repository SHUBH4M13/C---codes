#include<iostream>
using namespace std;

int fibo( int n){
    if( n <= 1 ) return n;
    int first  = fibo(n-1);
    int sfirst = fibo(n - 2);
    return first+sfirst;
}

int main(){
    int n;
    cin>>n;
    cout<<fibo(n);
    return 0;
}