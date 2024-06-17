#include<iostream>
#include<string>
using namespace std;
int main(){
    string a,b;
    cin>>a;
    cin>>b;
    cout<<a.size()<<" "<<b.size()<<endl;
    cout<<a+b<<endl;
    char z = a[0];
    char y = b[0];
    a[0] = y;
    b[0] = z;
    cout<<a<<" "<<b;
    return 0;
    
}