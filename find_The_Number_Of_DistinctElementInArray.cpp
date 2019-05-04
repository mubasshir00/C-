#include<bits/stdc++.h>
using namespace std ;
int main()
{
   long long arr[100000];
   long long n,m;
   cin>>n>>m;
   set<long long>S;
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   for(int i=n-1;i>=0;i--)
   {
       S.insert(arr[i]);
       arr[i]=S.size();
   }
   for(int i=0;i<m;i++)
   {
       int disPos = 0 ;
       cin>>disPos;
       cout<<arr[disPos-1]<<endl;
   }

    return 0 ;
}
