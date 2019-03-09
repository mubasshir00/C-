//bigmod ,reverse number

#include<bits/stdc++.h>
using namespace std ;
int m =10;
int bigmod(int a,int b)
{
    if(b==0) return 1;
    if(b%2==0)
    {
        int ret = bigmod(a,b/2);
        return ((ret%m)*(ret%m))%m;
    }
    else
    {
        return ((a%m)*(bigmod(a,b-1)%m))%m;
    }
}
long long  int reveerse(long long int n)
{
   long long  int remainder =0,rev=0;
    while(n!=0)
    {
        remainder = n%10;
        rev = (rev*10)+remainder;
        n=n/10;
    }
    return rev ;
}
int sum (int a,int b)
{
    return a+b;
}
vector< int>v;
 int primefact(int n)
{
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            v.push_back(i);
            n=n/i;
            i=1;

        }
    }
     v.push_back(n);
}



int main()
{

    
    return 0 ;

}
