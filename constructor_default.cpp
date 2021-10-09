#include<iostream>
using namespace std;
class complex
{
int a,b;
public:
 complex()
{
     a=0;
     b=0;
 }

  complex(int x,int y)
 {
     a=x;
     b=y;
 }

 void printnum()
 {
     cout<<a<<"+"<<b<<"i"<<endl;;
 }
    complex(int x)
 {
     a=x;
     b=0;
 }

};
int main()
{
    complex c1(5,2);
    c1.printnum();
    complex c2(5);
    c2.printnum();
    complex c3();
    c2.printnum();
    return 0;
}