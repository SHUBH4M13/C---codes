#include<iostream>
using namespace std;

int sum( int i , int total){
    if( i < 1 ){
        return total;
    }
    return sum(i - 1,total + i);
    
}

int main(){
    int n;
    cin>>n;
    int result = sum( n , 0);
    cout<<result;
    return 0;
}