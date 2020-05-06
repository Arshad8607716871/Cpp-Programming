#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
class nest{
 public:
     class display {
 private:
    int s,a,b;
 public:
     void getdata(){
     cout<<"Enter 1 no. \n";
     cin>>a;
     cout<<"Enter 2 no. \n";
     cin>>b;}
     void sum(){
     s=a+b;}
     void show(){
     cout<<"Sum of a and b is "<<s;
     }
     };
    };
    int main(){
     nest::display x;
     x.getdata();
     x.sum();
     x.show();
     getch();
     }
