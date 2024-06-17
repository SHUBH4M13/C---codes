#include<iostream>
using namespace std;
int main(){
    int i,j,k,n;
    cin>>n;
    for( i = 0 ; i < n ; i++){
        for( k = 0 ; k < i ; k++ ){
            cout<<" ";
        }
        for(j = 1; j <= 2*n-1 ;j++){
            cout<<"*";
            
        }
        n--;
        for( k = 0 ; k < i ; k++ ){
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}