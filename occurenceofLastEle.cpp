//occerence of last element in arr/vector 
#include<iostream>
#include<vector>

using namespace std;
int main(){
    int i, size, last;
    int occ = 0;

    cout<<"enter the size of the array"<<endl;
    cin>>size;
    vector <int> arr(size);
    for(i = 0; i<size ; i++){
        cout<<"enter any number"<<endl;
        cin>>arr[i];
    }
    for(i = 0; i<size ; i++){
        
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    last = arr[size-1];
    cout<<"last"<<last<<endl;
    
    for(i = 0; i<size ; i++){
        if(last == arr[i]){
            occ = occ + 1;
        }
    
    }
    cout<<endl; 
    cout<<"occurence of last element"<<occ<<endl;
    return 0;
}