#include<iostream>
using namespace std;
int main(){
    int size,i;
    int x ;
    cin>>size;
    cout<<"enter which element you want to search";
    cin>>x;
    int arr[size];
    for(i = 0 ; i < size ; i++){
        cout<<"enter any number";
        cin>>arr[i];
    }
    for(i = 0 ; i < size ; i++){
        if( x == arr[i]){
            cout<<x<<"found!!";
            break;
        }
    }
    return 0;
}