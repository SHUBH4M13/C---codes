#include<iostream>
using namespace std;

void inarr( int arr[],int n){
    for( int i = 0 ; i < n ; i++){
        cout<<"enter elemts";
        cin>>arr[i];
    }
}

void sw( int arr [] , int i , int j){
    if( i >= j ) return ;
    swap(arr[i],arr[j]);
    sw( arr , i + 1 , j - 1 );
    
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
    sw( arr , 0 , n -1);
    outarr(arr,n);
    return 0;
}