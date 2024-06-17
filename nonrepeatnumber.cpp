#include<iostream>
using namespace std;


int main(){
    bool chk;
    int arr[5] = {1,2,1,4,4};
    int i , j ;
    for( i = 0 ; i < 5 ; i++){
        chk = false;
        for( j = 0 ; j < 4 ; j++){
            if( i!=j && arr[i] == arr[j]){
                chk = true;
                break;
        }
        }
        if(!chk) cout<<arr[i]<<" ";
    }
    return 0;
}
