// 1 2 3 4 5 6
// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2 
// 1
#include <iostream>
using namespace std;
int main(){
    int i,j,k,n;
    cin>>n;
    int dubl = n;
    for( i = 1 ; i <= n ; i++){
        for( j = 1 ; j <= dubl ; j++){
            cout<<j<<" ";
        }
        dubl--;
        cout<<endl;
    }
    return 0;
}