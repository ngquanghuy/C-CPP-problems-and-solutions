#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int a, b;
	cin>>a>>b;
	int k = a*b;
	while(b!=0){
		int temp = b;
		b = a%b;
		a = temp;
	}
	cout<<k/a;
}
