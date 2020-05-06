#include<bits/stdc++.h>
using namespace std;
int main()
{float a,d;
int b,c;
    cout<<"Enter any decimal no.";
    cin>>a;
    b=a;
    d=a-b;
    if(d>=0.5)
    cout<<b+1;
else if(d<0.5)
    cout<<b;
return 0;
}
