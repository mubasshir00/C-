long long binpow(long long a, long long b) {
    if (b == 0)
        return 1;
    long long res = binpow(a, b / 2);
    if (b % 2)
        return res * res * a;
    else
        return res * res;
}

long long m =10;
long long binpow(long long a, long long b) {
    a %= m;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}

long long binpow(long long a, long long b) {
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}
int firstThree(long long x,long long y)
{
    double z = y*log10(x);
    long long temp = z ;
    z=z-temp;
    z=(pow(10,z));
    z=z*100;
    return (int)z;
}

int main()
{
    long long tc ;



    cin>>tc;

                while(tc--){
        long long c,d,e;
        cin>>c>>d;
        //string str = std::to_string(c,d);
        //cout<<binpow(c,d)<<endl;
        //cout<<v[v.size()-1]<<endl;
       // v.clear();
       printf("%03d...%03d\n",firstThree(c,d),binpow(c,d));
       //cout<<firstThree(c,d)<<"..."<<binpow(c,d)<<endl;
                }



    return 0 ;
}
