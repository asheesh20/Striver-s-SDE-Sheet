int countDigits(int n){
	int r,c(0),num=n;
	while(n!=0){
		r=n%10;
		if(r==0){
			n/=10;
                } else {
                  if (num % r == 0) c++;
				  n /= 10;
                }
        }
	return c;
}
