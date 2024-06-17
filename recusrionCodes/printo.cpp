#include<iostream>
using namespace std;

int printNos( int i ,int x){
    if( i > x) return x;
    
    printNos( i + 1 , x );
    cout<<i;
}

int main(){
    int x,i;
    cin>>i>>x;
    printNos(i,x);
    return 0;
}