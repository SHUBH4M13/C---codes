#include<iostream>
using namespace std;

void inarr(int n,int arr[]){
    int i;
    for( i = 0 ; i < n ; i++){
        cout<<"enter values in array"<<endl;
        cin>>arr[i];
    }
}


void bubble_sort(int n, int arr[]){
    int i,j,sw;
    for( i = 0 ; i < n ; i++){
        for( j = 0 ; j < n - 1 ; j++){
            if( arr[j]> arr[j+1] ){
            sw = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = sw;
            }
        }
    }
}

void outarr(int n,int arr[]){
    int i;
    for( i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    inarr(n,arr);
    bubble_sort(n,arr);
    outarr(n,arr);
    return 0;
}