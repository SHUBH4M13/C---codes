#include<iostream>
using namespace std;
int main(){
    int a,b,i;
    int num1 = 0;
    cin>>a>>b;
    for(i=1;i<=a;i++){
        if( a % i == 0 && b % i == 0){
          //  if( i > num1){
                num1 = i;
           // }
        } 
    } 
cout<<num1;
return 0;
}
