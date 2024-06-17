#include<iostream>
using namespace std;
int main(){
    int a,i;
    float l,p,z;
    cin>>a;
    for(i=0;i<a;i++){
        cin>>p>>l;
        z = l/p * 100;
    
       if(z >= 75){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }

    }
    return 0;
}