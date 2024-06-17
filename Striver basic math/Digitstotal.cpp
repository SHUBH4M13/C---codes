//Reverse of number
#include<iostream>
using namespace std;
int main(){
    int num,dubl;
    int neew = 0;
    int digit  = 0;
    cin>>num;
    dubl = num;
    while(dubl!=0){
        digit += 1;
        dubl = dubl / 10;
    }
    cout<<digit;
    return 0;
}