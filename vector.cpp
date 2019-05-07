#include<bits/stdc++.h>
using namespace std ;
int main()
{
    vector<int>v;
    int  n ;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x ;
        cin>>x;
        v.push_back(x);
    }
    cout<<"Sort : ";
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    // sort descending with vector
    cout<<"Sort descending : ";
    sort(v.rbegin(),v.rend());
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    random_shuffle(v.begin(), v.end());
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;


    //partial sort
    partial_sort(v.begin(),v.begin()+2,v.end());
    cout<<"partial sort ";
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
    
    
    
    sort(v.begin(),v.end());
    do
    {
        for(int i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }while
    (next_permutation(v.begin(),v.end()));

    return 0 ;
}
