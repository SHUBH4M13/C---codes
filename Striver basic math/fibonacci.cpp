#include<iostream>
using namespace std;
int main(){
    int i,first = 0,next,second = 1;
    int num;
    cout<<"Enter number here";
    cin>>num;
    cout<<first<<endl;
    for(i=0;i<num;i++){
        next = first + second;
        first = second;
        second = next;
        cout<<next<<endl;
    }
    return 0;
}