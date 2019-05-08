#include<bits/stdc++.h>
#include<bitset>
using namespace std ;

typedef long long ll ;
typedef vector<int>vi;
typedef map<int,int>mii;


ll _sieve_size;
bitset<10000010>bs;
vi primes;


void sieve(ll upperbound) // create list of prime number 0 to upperbound
{
    _sieve_size = upperbound+1;
    bs.set();
    bs[0] = bs[1] = 0 ;

    for(ll i = 2;i<= _sieve_size;i++)
    if(bs[i]){
        for(ll j = i*i ; j<= _sieve_size;j+=i)
            bs[j]=0;
            primes.push_back((int)i);

    }
}

//check prime

bool isPrime(ll n)
{
    if(n<=_sieve_size)return bs[n];

    for(ll i = 0 ; i<primes.size();i++)
        if(n%primes[i]==0)return false;
        return true ;

}
//prime factor
vi primeFactors(ll n)
{
    vi factors;
    ll PF_indx=0,PF = primes[PF_indx];
    while(n!=1 && (PF * PF <=n))
    {
        while(n%PF==0)
        {
            n/=PF;
            factors.push_back(PF);
        }
        PF = primes[++PF_indx];
    }
    if(n!=1)factors.push_back(n);
    return factors;
}




int main()
{
    //print prime number
    sieve(10000000);
    for(ll i=0;i<primes.size();i++)
    {
       // cout<<primes[i]<<endl;
    }
    //print prime number

    cout<<isPrime(7)<<endl;


    //prime factor

    vi result   = primeFactors(24);
    for(vi:: iterator i =result.begin();i!=result.end();i++)
    {
        cout<<*i<<" ";
    }

    
    



    return 0 ;
}
