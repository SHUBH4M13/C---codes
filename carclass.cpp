#include<iostream>
using namespace std;
class car{
    public:
    int speed;
    int milage;
    float price;
};

int main(){
    car tata;
    tata.price = 900000.00;
    tata.milage = 50;
    tata.speed = 180;
    cout<<"price "<<tata.price<<endl;
    cout<<"speed "<<tata.speed<<endl;
    cout<<"milage "<<tata.milage<<endl;
    return 0;
}