#include<iostream>
using namespace std;

class box{
    public:
    int length;
    int breath;
    int width; 
    public:
    void parater(int length){
    cout<<"hello guys ";
}
};

int main(){
    box b1;
    b1.length = 20;
    b1.parater(b1.length);
    return 0;
}