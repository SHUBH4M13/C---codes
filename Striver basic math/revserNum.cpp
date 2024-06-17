//Reverse of number
#include<iostream>
using namespace std;
int main(){
    int num,dubl;
    long neew = 0;
    cin>>num; 
    dubl = num; 
    while(dubl!=0){
        neew = neew * 10 + dubl % 10; //storing last int 
        dubl = dubl / 10; // removing the last digit 
    }
    cout<<num<<endl<<neew;
    return 0;
}