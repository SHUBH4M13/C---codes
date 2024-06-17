#include<iostream>
using namespace std;
int main(){
    int size,i,mini,j;
    cout<<"enter size of the array"<<endl;
    cin>>size;
    int arr[size];
    for( i = 0 ; i < size ; i++){
        cout<<"enter the element"<<endl;
        cin>>arr[i];
    }
    mini = arr[0];
    for( i = 0 ; i < size ; i++){
        for( j = i+1 ; j <= size ; j++){
        if (arr[i] > arr[j]){
        swap(arr[i],arr[j]);
        }
        }
    }

    for( i = 0 ; i < size ; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}