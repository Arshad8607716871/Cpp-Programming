#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
class item{
  private:
  int a,b;
  public:
      void getdata(){
        cout<<"Enter value of a and b \n";
        cin>>a>>b;
        }
        void show(){
        cout<<"Sum of a and b is "<<a+b;}
        };
int main()
{
    item a1;
    a1.getdata();
    a1.show();
    getch();

}
