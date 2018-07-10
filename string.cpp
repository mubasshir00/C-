#include<bits/stdc++.h>
using namespace std ;
int main()
{
    string a ,b ,c,d;
   cin>>a;
   cin>>b;
   cout<<"String for append ::::"<<endl;
   cin>>d;

   c=a+b;
   cout<<"Add to String ::::"<<endl;
   cout<<c<<endl;
   a+=d;
   cout<<"After append ::::"<<endl;
   cout<<a<<endl;
   c.erase(5,9);
   cout<<"after erase ::::"<<endl;
   cout<<c<<endl;

    return 0;
}
