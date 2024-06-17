#include<iostream>
using namespace std;
void poin(int* p,int* q){
    int a = *p + *q;
    int b = *p - *q;
    b = abs(b);
    cout<<a<<endl<<b;
}

int main(){
    int x,y;
    cin>>x;
    cin>>y;
    int *p = &x;
    int *q = &y;
    int a,b;
    poin(p,q);
    return 0;
}