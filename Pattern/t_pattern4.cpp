#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int32_t main(){
	int k=1;
	for(int i=1;i<=5;i++){
		for(int j=1;j<=5;j++){
			if(j<=i) cout<<k;
			else cout<<" ";
		}
		k++;
		if(i<5) cout<<endl;
	}
}