#include<iostream>
using namespace std;
int main(){
    int size,i;
    int a = 0;
    cin>>size;
    int arr[size];
    for(i = 0 ; i < size ; i++){
        cout<<"enter any number";
        cin>>arr[i];
    }
    for(i=0;i<size;i++){
        a = a + arr[i];
    }
    cout<<a;
    return 0;
}