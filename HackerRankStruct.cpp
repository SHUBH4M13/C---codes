#include<iostream>
#include<string>
using namespace std;

struct student{
    int age;
    string first_name;
    string last_name;
    int standard;
};

int main(){
    student s;
    cin>>s.age;
    cin.ignore();
    getline(cin,s.first_name);
    getline(cin,s.last_name);
    cin>>s.standard;
    
    cout<<s.age<<" "<<s.first_name<<" "<<s.last_name<<" "<<s.standard;
    return 0;
}
