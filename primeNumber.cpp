#include<iostream>
using namespace std;
int main(){
    int i,n;
    int count = 0;
    cin>>n;
    for(i=1;i<=n;i++){
        if( n % i == 0 ){
            count += 1;
        }
    }
    if(  count > 2 ){
        cout<<"not a prime number ";
    }
    else{
        cout<<"prime number";
    }
    
    return 0;
}