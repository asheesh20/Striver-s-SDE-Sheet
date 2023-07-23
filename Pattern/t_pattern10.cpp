#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int32_t main(){
	for(int i=1;i<=9;i++){
		for(int j=1;j<=5;j++){
			if(i<=5){
				if(j>=1 && j<=i) cout<<"*";
				else cout<<" ";
			}
			else{
				if(j>=1 && j<=10-i) cout<<"*";
				else cout<<" ";
			}
		}
		if(i<9) cout<<endl;
	}
}	