#include<iostream>
using namespace std;
int main(){
    int size,i,num,pos;
    cout<<"enter size of the array"<<endl;
    cin>>size;
    int arr[size + 1];
    for( i = 0 ; i < size ; i++){
        cout<<"enter the element"<<endl;
        cin>>arr[i];
    }
    cout<<"enter the postion of the element"<<endl;
    cin>>pos;
    cout<<"enter the number now"<<endl;
    cin>>num;
    for( i = size ; i >= pos ; i--){
        arr[i+1] = arr[i];
    }
    arr[pos] = num;
    for( i = 0 ; i <= size ; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}