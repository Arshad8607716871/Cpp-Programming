#include<bits/stdc++.h>
#include<conio.h>
 using namespace std;
 class a{
  private:
      int b;
      int *p;
  public:
    a(int x,int y){
        b=x;
        p=new int;
        *p=y;
      }
    void display(){
    cout<<"Value is "<<b<<"\n"<<*p;
     }
  };
  int main(){
  a a1(3,4);
  a1.display();
  getch();
  }
