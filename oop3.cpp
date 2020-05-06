#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
class abc{
  static int count;
    int a,b,c;
  public:
     void getdata(){
        cout<<"Enter value";
        cin>>a>>b>>c;
        count++;}
        void show(){
           cout<<"Value of a \n"<<a<<"Value of b \n"<<b<<c<<"Value of static count is "<<count;
           }
           };
           int abc::count;
int main(){
  abc a1,a2,a3;
  a1.getdata();
  a2.getdata();
  a3.getdata();
  a1.show();

  getch();
  }

