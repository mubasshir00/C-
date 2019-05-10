#include <bits/stdc++.h>
using namespace std ;
vector<int>v;
int divisor(int n)
{

//time-  O(sqrt(n))

    for(int i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            v.push_back(i);
            if(n/i!=n)
            {
                v.push_back(n/i);
            }
        }
    }
}
int main()
{
    int m ;
    cin>>m;
    divisor(m);
   for(int i=0;i<v.size();i++)
   {
       cout<<v[i]<<" ";
   }
    return 0;
}
