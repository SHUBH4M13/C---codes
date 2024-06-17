#include<iostream>
using namespace std;

void inparr(int n,int arr[]){
    int i;
    for(i = 0 ; i < n; i++){
        cout<<"enter the elements"<<endl;
        cin>>arr[i];
    }
}

void insertSort( int n , int ar r[]){
    int i,j;
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        j = i - 1;
        while( j >= 0 && arr[j] > key){
            arr[j+1] = arr[j];
            j = j - 1;   
        }
        arr[j+1] = key;
    }
}

void display_arr(int n, int arr[]){
    int i;
    for( i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cout<<"how many elements you want to enter"<<endl;
    cin>>n;
    int arr[n];
    inparr(n,arr);
    insertSort(n,arr);
    display_arr(n,arr);
    return 0;
}