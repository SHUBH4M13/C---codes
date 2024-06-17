#include<iostream>
using namespace std;
int main(){
int years, days, weeks ,month;
int value;
cin>>value;
years = value / 365;
days = value % 365;
month = days / 30;
days = days % 30;
weeks = days / 7;
days = days % 7;
cout<<years<<endl<<month<<endl<<weeks<<endl<<days;
    return 0;
}