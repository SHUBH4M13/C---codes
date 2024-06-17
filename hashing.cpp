#include<iostream>
using namespace std;
int main(){
    int n,i;
    cin>>n;
    int inarr[n];
    for(i = 0 ; i<n ; i++){
        cin>>inarr[i]; //taking input in array 
    }
    int hash[n];
    for(i = 0 ; i<n ; i++){
        hash[inarr[i]] += 1;        
    }
    
    int a;
    cin>>a;
    cout<<hash[a];
    return 0;
}