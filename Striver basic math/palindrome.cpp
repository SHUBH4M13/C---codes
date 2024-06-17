//palindrome in cpp
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter your number here"<<endl;
    cin>>num; 
    int dubl = num; 
    int i;  
    int b = 0;
    while(dubl!=0){
        b = b * 10 + dubl % 10; 
        dubl = dubl / 10;
    }
    if(b == num){
        cout<<"palindrome";
    }
    else{
        cout<<"NO";
    }
    return 0;
}