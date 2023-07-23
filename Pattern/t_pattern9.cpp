#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int32_t main(){
	for(int i=1;i<=10;i++){
		for(int j=1;j<=9;j++){
			if(i<=5){
				if(j>=6-i && j<=4+i) cout<<"*";
				else cout<<" ";
			}
			else {
				if(j>=i-5 && j<=15-i) cout<<"*";
				else cout<<" ";
			}
		}
		if(i<10) cout<<endl;
	}
}