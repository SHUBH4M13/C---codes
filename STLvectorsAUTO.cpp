#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main(){
    int i;
    int a;
    vector <int> v ;
    for(i=0;i<5;i++){
        cin>>a;
        v.push_back(a);
    }

    //v.pop_back();
    //v.clear();
    


    for(auto it = v.begin(); it != v.end() ; ++it){
        cout<<*it<<" ";
    }
    return 0;
}