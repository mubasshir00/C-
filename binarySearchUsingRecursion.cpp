#include<bits/stdc++.h>
using namespace std ;
int binarysearch(int arr[],int left ,int right,int x)
{
    if(right>=left){
    int mid = left+(right-1)/2;
    if(arr[mid]==x)
        return mid;
        if(arr[mid]>x)
        {
            binarysearch(arr , left ,mid-1 ,x);
        }
        if(arr[mid]<x)
        {
            binarysearch(arr,mid+1,right,x);
        }
            }

            return -1;
}
int main()
{
    int arr[100];
    int n;
    int x ;
    cin>>x;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<binarysearch(arr,0,n-1,x);
    return 0 ;
}
