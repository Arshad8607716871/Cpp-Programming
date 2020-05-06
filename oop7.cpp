#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
class aee{
  private:
      int a,b;
  public:
   explicit aee(int x,int y){
   a=x;
   b=y;
   }
   void show(){
   cout<<"a is "<<a<<endl<<"b is "<<b;
   }
    };
    int main(){
     aee a1(3,4);
     a1.show();
     getch();
     }
