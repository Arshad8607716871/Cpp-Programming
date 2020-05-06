
#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
int main(){

 cout<<"Enter year";
 int x;
 cin>>x;
 if(x%4)
    cout<<"Not a leap year";
 else if(x%100)
    cout<<"Leap year";
    else if(x%400)
        cout<<"Not a leap year";
    else
        cout<<"leap year";
 getch();
 }
