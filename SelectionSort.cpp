#include<iostream>
using namespace std;
int main(){
    int arr[] = {2,5,7,1,3};
    int n = 5;
    int i,j,mini;
    for( i = 0 ; i < n - 1; i++){
        mini = i;
        for( j = i+1 ; j < n ; j++){
            if( arr[j] < arr[mini]){
                mini = j;
                
            }
        }
        if( mini != i){
            swap(arr[i],arr[mini]);
            } 
    }
    
    for( i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}