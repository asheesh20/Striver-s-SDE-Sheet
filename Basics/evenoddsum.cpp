#include<iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int r,even=0,odd=0;
	while(n!=0){
		r=n%10;
		if(r&1) odd+=r;
		else even+=r;
		n/=10;
	}
	cout<<even<<" "<<odd;
	
}
