#include<iostream>
using namespace std;

int printos( int x){
    if ( x < 1 ) return 0;
    
    printos(x - 1);
    cout<<x;
}

int main(){
    int x;
    cin>>x;
    int ans = printos(x);
    cout<<ans;
    return 0;
}