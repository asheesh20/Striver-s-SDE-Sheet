#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int32_t main(){
	int k,l;
	for(int i=1;i<=4;i++){k=1;l=4;
		for(int j=1;j<=8;j++){
			if(j<=4){
				if(j<=i){
					cout<<k;
					k++;
				}
				else cout<<" ";
			}
			else{
				if(j>=9-i){
					cout<<l;
					l--;
				}
				else {
					cout<<" ";
					l--;
				}
			}
		}
		if(i<4) cout<<endl;
	}
}
