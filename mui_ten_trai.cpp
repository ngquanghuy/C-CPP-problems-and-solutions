#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=0; i<n-1; i++){
		for(int j=1; j<n-i; j++)
			cout<<"~";
		for(int k=n; k>i; k--)
			cout<<"*";
		cout<<endl;
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<i; j++)
			cout<<"~";
		for(int k=n+1; k>n-i; k--)
			cout<<"*";
		cout<<endl;
	}
}
