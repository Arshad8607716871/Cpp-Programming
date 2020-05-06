#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
class compare{
private:
    int a,b;
public:
    void setdata(int x,int y){
     a=x;
     b=y;
     }
     void display(){
     cout<<"Value of a is "<<a<<endl<<"Value of b is "<<b;
     }
     compare operator+(compare c){
     compare temp;
     temp.a=a+c.a;
     temp.b=b+c.b;
     return temp;

     }
};
int main(){
compare c1,c2,c3;
c1.setdata(2,3);
c2.setdata(3,2);
c3=c1+c2;
c3.display();
getch();
}
