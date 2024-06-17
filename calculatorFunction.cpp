#include<iostream>
using namespace std;
int a = 10;
int b = 20;
void message(){
    cout<<"1 for add 2"<<endl;
    cout<<"2 for minus"<<endl;
    cout<<"3 for divide"<<endl;
    cout<<"enter number here"<<endl;
    return;
}
int add(int x , int y){
    return x+y;
}
int mius(int x,int y){
    return x-y;
}
int divide(int x, int y){
    return x/y;
}
int main(){
    message();
    int c;
    cin>>c;
    int a,b;
    cout<<"enter value of a and b:"<<endl;
    cin>>a;
    cout<<endl;
    cin>>b;
    if(c == 1){
        int q = add(a,b);
        cout<<q<<endl;
    }
    else if( c == 2){
        int result = mius(a,b);
        cout<<result<<endl;
    }
    else if( c == 3){
        int r = divide(a,b);
        cout<<r<<endl;
    }
    return 0;
}