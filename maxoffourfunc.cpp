#include<iostream> 
using namespace std;
int maxf(int a,int b,int c,int d){
    int z = a;
    if( b >= z ){
        z = b;
    }
    if( c >= z ){
        z = c;
    }
    if( d >= z ){
        z = d;
    }

    return z;
}
int main(){
    int a,b,c,d;
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    int mux=maxf(a,b,c,d);
    cout<<mux;
}