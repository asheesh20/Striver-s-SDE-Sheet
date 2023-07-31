#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int32_t main(){
	char ch=65;
	for(int i=1;i<=5;i++){
		for(int j=1;j<=5;j++){
			if(j<=i){
				cout<<ch;
			}
			else cout<<" ";
		}
		ch++;
		if(i<5) cout<<endl;
	}
}