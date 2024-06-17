#include<iostream>
#include<string>

using namespace std;

class employee{
    public:
    int id;
    string name;
    float salary;
    public:
    employee( int i , string n , float s){
        id = i;
        name = n;
        salary = s;

    }
    void detail(){
        cout<<id<<" "<<name<<" "<<salary;
    }
};

int main(){
    employee s1 = employee(212 ,"shubham", 90.000);
    s1.detail();
    return 0;
}