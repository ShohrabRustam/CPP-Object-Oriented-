#include <iostream>
using namespace std;
class Employee
{
private:
int a,b,c;
public:
int e,d,f;
void setdata(int a1,int a2,int a3);
void displaydata()
{
cout <<"the vaolue of a is "<<a<<endl;
cout <<"the vaolue of a is "<<b<<endl;
cout <<"the vaolue of a is "<<c<<endl;
cout <<"the vaolue of a is "<<d<<endl;
cout <<"the vaolue of a is "<<e<<endl;
cout <<"the vaolue of a is "<<f<<endl;
}
};
void Employee::setdata(int a1,int a2,int a3){
    a=a1;
    b=a2;
    c=a3;
}
int main()
{
    Employee e1;
       e1.d=1;
    e1.e=3;
    e1.f=5;
    e1.setdata(2,4,6);
    e1.displaydata();
 
}