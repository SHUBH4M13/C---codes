#include<iostream>
using namespace std;
int main(){
    int arr[5] = {1,10,3,4,6};
        int largest , i;
        largest = arr[0];
        for( i = 0 ; i < 5 ; i++){
            if(largest < arr[i] ){
                largest = arr[i];
            }
        }
        cout<<largest;
    return 0;
}