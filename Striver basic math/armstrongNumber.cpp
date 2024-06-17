#include<iostream>
#include<cmath>

using namespace std;
int main(){
    int n,i,las;
    int digit = 0 ;
    int x = 0;
    cin>>n;
    int dubl = n;
    int dub = n;
    while(dubl!=0){
        las = dubl % 10;
        digit += 1;
        dubl = dubl / 10;
    }
    while(dub!=0){
        las = dub % 10;
        x += pow(las,digit);
        dub = dub / 10; 
        
    }
    cout<<"total digit is"<<digit<<endl;
    cout<<"value of x is"<<x<<endl;
    
    if( x == n ){
       cout<<"armstrong number";
    }
    else{
        cout<<"not a armstrong number";
    }
    
    return 0;
}