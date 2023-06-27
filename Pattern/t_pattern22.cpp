#include<bits/stdc++.h>
#define ll long long
using namespace std;
int32_t main(){
	for(int i=0;i<7;i++){// 2*n-1
		for(int j=0;j<7;j++){//2*n-1
			int top=i;
			int left=j;
			int right=6-j;//2*n-2-j
			int down=6-i;//2*n-2-i
			cout<<4-min(min(top,down),min(left,right));
		}
		if(i<6) cout<<endl;
	}
}