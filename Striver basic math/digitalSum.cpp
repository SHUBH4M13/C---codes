#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    int dubl = num;
    int i;
    int evensum = 0;
    int oddsum = 0;
    int b = 0;
    while(dubl!=0){
        b = dubl % 10;
        if(b % 2 == 0){
            evensum += b;
        }
        else{
            oddsum += b;
        }
        dubl = dubl / 10; //update 
    }
   cout<<evensum<<" "<<oddsum;
    return 0;
}