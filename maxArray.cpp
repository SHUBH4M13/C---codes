#include<iostream>
using namespace std;
int main(){
    int size;
    cin>>size;
    int arr[size];
    int i;
    int smx;
    
    for(i = 0;i < size ; i++){
        cout<<"enter any number";
        cin>>arr[i];
    }

    cout<<sizeof(arr)/sizeof(arr[0])<<"size"<<endl;
    int mx = arr[0];
    for(i=0;i<size;i++){
        if(arr[i] >= mx){
            mx = arr[i];
        }     
    }
    cout<<mx;
    return 0;
}