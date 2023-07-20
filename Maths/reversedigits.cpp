long reverseBits(long n) {
    unsigned long int m=0,bit;
    for(int i=0;i<32;i++){
        bit=n&1;
        m=(m<<1)|bit;
        n=n>>1;
    }
    return m;
}
