#include<iostream>
using namespace std;

int main() {
	int s=0,r,n;
	cin>>n;
	while(n!=0){
		r=n%10;
		s=s*10+r;
		n/=10;
	}
	cout<<s;
}
