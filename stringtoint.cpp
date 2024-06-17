#include<iostream>
#include<string>

using namespace std;
int main(){
    string a = "2673814";
    int b = stoi(a);
    if( b % 8 == 0){
        cout<<"divisible";
    }
    else{
        cout<<"no";
    }
    return 0;
}