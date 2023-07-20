bool palindrome(int n)
{
    int s(0),r,num=n;
    while(n!=0){
        r=n%10;
        s=s*10+r;
        n/=10;
    }
    if(num==s) return 1;
    return 0;
}
