#include<bits/stdc++.h>
#include<conio.h>
using std::cout;
class complex{
 private:
     int a,b;
 public:
    complex(){
        cout<<"Hey there i am constructor";
       }
       complex(int x,int y){
           a=x;
           b=y;
       }
       void display(){
       cout<<"\nValue of a and b is"<<a<<" and \n"<<b;}

    };
    int main(){
    complex c1,c2(3,4);
    c2.display();
      getch();
      }
