#include<bits/stdc++.h>
#define ll long long
using namespace std;
int32_t main(){
	char ch;
	for(int i=1;i<=4;i++){ch=65;
		for(int j=1;j<=7;j++){
			if(j>=5-i && j<=3+i){
				cout<<ch;
				if(j<4) ch++;
				else ch--;
			}
			else cout<<" ";
		}
		if(i<4) cout<<endl;
	}
}