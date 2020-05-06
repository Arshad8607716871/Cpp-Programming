#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
class teacher{
 public:
     char name[10];
     class student{
  public:
     int rollno;
      float marks;
      }; student s;
      void display(){
       cout<<"Name"<<name;
       cout<<"Roll No."<<s.rollno;
       cout<<"Marks"<<s.marks;}
       };
int main(){
teacher t;
cout<<"Enterr name";
 cin>>t.name;
 t.s.rollno=20;
 t.s.marks=70.5;
 t.display();
 getch();
 }
