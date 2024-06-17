#include<iostream>
using namespace std;
int main(){
    int a,i;
    cin>>a;
    int arr[a];
    for(i=0;i<a;i++){
        cin>>arr[i];
    }
    for(i=a-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
    return 0;
}