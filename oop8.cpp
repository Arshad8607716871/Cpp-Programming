#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
class bus{
private:
    const int a;
public:
    bus(int x): a(x){
    }
    void show(){
     cout<<"value of a is"<<a;
    }
};
int main(){
 bus a1(10);
 a1.show();
 getch();
 }
