#include<iostream>
using namespace std;
void arra(int arr[],int size){
    int i;
    for(i=0;i<size;i++){
        cout<<"enter any number"<<endl;
        cin>>arr[i];
    }
}

void printarr(int arr[], int size){
        int i;
        for(i=0;i<size;i++){
            cout<<arr[i];
        }
    }

int main(){
    int size;
    cout<<"enter size of array"<<endl;
    cin>>size;
    int arr[size];
    arra(arr,size);
    printarr(arr,size);
    return 0;
}