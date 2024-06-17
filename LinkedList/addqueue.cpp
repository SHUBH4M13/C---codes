//Implement a queue with accepting integer elements, then find the sum of those elements
#include<iostream>
#include<queue>
using namespace std;

int main(){
	queue<int>numbers;
	int b,a;
	cout<<"enter how many numbers you want:"<<endl;
	cin>>a;
	for( int i = 0 ; i < a ; i ++){
		cin>>b;
		numbers.push(b);
	}
	int c = 0 ;
	while( !numbers.empty()){
		c += numbers.front();
		numbers.pop();
	}
	cout<<endl;
	cout<<c;
	return 0;
}