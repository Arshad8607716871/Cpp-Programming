#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
class circle{
private:
    const float pi=3.14;
    float r;
public:
    void getdata(){
    cout<<"Enter Radius of circle"<<endl;
    cin>>r;
    }
    void display(){
    cout<<"Area of the circle is"<<pi*r*r;}
    };
    int main(){
      circle c1;
      c1.getdata();
      c1.display();
      getch();
      }
