bool checkArmstrong(int n){
	int d=floor(log10(n)+1);
	int s=0,num=n;
	while(n!=0){
		int r=n%10;
		s=s+pow(r,d);
		n/=10;
	}
	if(num==s) return 1;
	return 0;
}
