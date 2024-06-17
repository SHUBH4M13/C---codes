#include<iostream>
using namespace std;

void inparr( int arr[] , int n){
    int i;
    for( i = 0 ; i < n ; i++){
        cout<<"now enter the elements";
        cin>>arr[i];
    }
}
merge( int arr[] , int low , int mid , int high ){
    
}


mergesort( int arr[], int low , int high ){
    int mid = low + high / 2;
    mergesort( arr , low , mid );
    mergesort( arr , mid + 1 , high );
    merge( arr , low , mid , high );
}

void outparr( int arr[] , int n){
    int i;
    for( i = 0 ; i < n ; i++){ 
        cout<<arr[i]<<" ";
    }
} 


int main(){
    int n;
    cout<<"enter the length of array ";
    cin>>n;
    int arr[n];
    inparr(  arr ,  n);
    mergesort( arr );
    outparr(  arr ,  n);
    return 0;
} 