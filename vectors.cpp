#include<iostream>
#include<vector>
using namespace std;
int main(){
    int i;
    int size;
    int a;
    cout<<"size"<<endl;
    cin>>size;
    vector<int> arr;
    for(i = 0;i<size;i++){
        cout<<"enter number"<<endl;
        cin>>a;
        arr.push_back(a);
    }
    cout<<arr[2];
    cout<<"priting array / vector"<<endl;
    for(i = 0 ; i < size ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    arr.resize(10);
    cout<<arr.size()<<endl;
    cout<<arr.capacity()<<endl;
    return 0;
}