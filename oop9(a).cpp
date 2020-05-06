#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
class compare{
private:
    int a;
public:
    void setdata(int x){
     a=x;
     }
     void display(){
     cout<<"Value of a is "<<a;
     }
     compare operator++(){
     compare temp;
     temp.a=++a;
     return temp;

     }
};
int main(){
compare c1,c2;
c1.setdata(2);
c2=c1.operator++();
c1.display();
c2.display();
getch();
}
