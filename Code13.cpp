#include<iostream>

using namespace std;

int main(){
	/*if a number is positive, negative, or zero*/
	int a;
	cout<<"enter a number: ";
	cin>>a;
	if(a>0){
		cout<<a<<" is positive";
	}
	else if(a<0){
		cout<<a<<" is negative";
	}
	else if(a==0){
		cout<<a<<" is 0";
	}
	return 0;
}
