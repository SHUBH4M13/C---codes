//sum upto n numbers
#include<iostream>
using namespace std;
int main(){
    int i,n,b;
    int sum = 0;
    cout<<"apko kitne number dalne h";
    cin>>n; // 5 
    for( i = 1 ; i <= n ; i++){
        cin>>b; // ye n times user se input lega
        sum = sum + b;
    }
    cout<<sum;
    return 0;
}