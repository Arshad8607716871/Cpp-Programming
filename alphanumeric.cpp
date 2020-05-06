#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
int main(){
int i,A=0,B=0;
char abc[20];
cout<<"Enter the string";
gets(abc);
for(i=0;i<=19;i++)
{
    if(abc[i]>='a' && abc[i]<='z' || abc[i]>='A' && abc[i]<='Z')
        A=1;
    else if(abc[i]>='0' && abc[i]<='9')
        B=1;
}
    if(A==1 && B==1)
        cout<<"String is Alphanumeric";
    else
        cout<<"String is not alphpnumeric";
getch();

}
