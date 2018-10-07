#include<bits/stdc++.h>
using namespace std ;
int main()
{
   map<int,int>Map;
   map<int,int>::iterator it ;

   int n,x,l;
   cin>>n;
   for(int i=0;i<n;i++)
   {
       cin>>x;
        Map[i]=x;
   }
   cout<<"Map Size : ";
   cout<<Map.size()<<endl;
   for(it=Map.begin();it!=Map.end();it++)
   {
       cout<<"key : "<<it->first<<" value : "<<it->second<<endl;
   }
    return 0 ;
}
