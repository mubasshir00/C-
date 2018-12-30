#include<bits/stdc++.h>
using namespace std ;
int createplin(int b, int ab,bool isODD)
{
    int c=b;
    int palin = b ;
    if(isODD)
    {
        c/=ab;
    }
    while(c>0)
    {
        palin = palin*ab+(c%ab);
        c/=ab;
    }
    return palin ;
}

void generatepalin(int n)
{
    int a ;
    for(int j=0;j<2;j++)
    {
        int i=1;
        while((a= createplin(i,10,j%2))<n )
        {
            cout<<a<<" ";
            i++;
        }
    }
}

int main()
{
    int number =104;
    generatepalin(number);
    return 0 ;
}
