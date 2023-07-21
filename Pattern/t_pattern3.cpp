#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int32_t main(){
	int k;
	for(int i=1;i<=5;i++){k=1;
		for(int j=1;j<=5;j++){
			if(j<=i){
				cout<<k;
				k++;
			}
			else cout<<" ";
		}
		if(i<5) cout<<endl;
	}
}