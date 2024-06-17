// Integer: 4 bytes
// Long: 8 bytes
// Float: 4 bytes
// Double: 8 bytes
// Character: 1 byte
#include<iostream>
using namespace std;
int main(){
    char inp[10];
    cin>>inp;
    cout<<inp;
    if( inp == 'Integer' || inp == 'integer' || inp == 'Float' || inp == 'float'){
        cout<<"4";
    }
    else if( inp == 'Double' || inp == 'double'|| inp == 'Long'|| inp == 'long'){
        cout<<"8";
    }
    else{
        cout<<"1";
    }
    return 0;
}