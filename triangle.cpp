#include<iostream>
using namespace std;
int main(){
    int i,j,n,m;
    cin>>n>>m;
    for( i = 0 ; i <= n ; i++){
        for( j = 1 ; j <= m ; j++){
            cout<<"*";
        }
        m--;
        cout<<endl;
    }
    return 0;
}