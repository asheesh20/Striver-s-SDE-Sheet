#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int32_t main(){
	char ch;
	for(int i=1;i<=5;i++){ch=65;
		for(int j=1;j<=5;j++){
			if(j<=6-i){
				cout<<ch;
				ch++;
			}
			else cout<<" ";
		}
		if(i<5) cout<<endl;
	}
}