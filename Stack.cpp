#include<bits/stdc++.h>
using namespace std ;
void showstack(stack<int>s)
{
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }

}
int main()
{
    stack<int>s;
    int n ;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int x ;
        cin>>x;
        s.push(x);
    }
    cout<<"All element in stack:"<<endl;
    showstack(s);
    cout<<endl;
    cout<<"Stack Size: "<<s.size()<<endl;
    cout<<"Top element : "<<s.top()<<endl;
    cout<<"After remove Last element : "<<endl;
    s.pop();
    showstack(s);
    return 0 ;
}
