#include<bits/stdc++.h>
using namespace std;
int main()
{
    for(int i=0;i<=9;i++)
    {
        for(int j=9;j>=0;j--)
        {
            if(j>i)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
