#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int32_t main(){
	for(int i=1;i<=5;i++){
		for(int j=1;j<=5;j++){
			if(j<=i){
				if(i%2==1 && j%2==1) cout<<"1 ";
				if(i%2==0 && j%2==1) cout<<"0 ";
				if(i%2==0 && j%2==0) cout<<"1 ";
				if(i%2==1 && j%2==0) cout<<"0 ";
			}
		}
		if(i<5) cout<<endl;
	}
}