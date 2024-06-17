#include<iostream>
using namespace std;

void inarr( int arr[],int n){
    for( int i = 0 ; i < n ; i++){
        cout<<"enter elemts";
        cin>>arr[i];
    }
}

void swap( int arr [] , int n){
    int i = 0; int j = n-1;
    while( i < j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}

void outarr( int arr[] , int n){
        for( int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }
}


int main(){
    int i,n,j;
    cout<<"enter how many elemts you want";
    cin>>n;
    int arr[n];
    inarr(arr,n);
    swap(  arr  ,  n);
    outarr(arr,n);
    return 0;
}