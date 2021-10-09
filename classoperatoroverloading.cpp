#include<iostream>
using namespace std;
class Vactor
{
    private:
    int x,y;
    public:
    Vactor(int a =0 ,int b=0);

  Vactor operator+(const Vactor&parameter)
{
Vactor temp;
temp.x=x+parameter.x;
temp.y=y+parameter.y;
return temp;
} 
   
};
Vactor:: Vactor(int a,int b)
    {
       
     x=a;
     y=b;
    }

int main()
{
   Vactor v1(4,3);
   Vactor v2(3,2);
   Vactor v3=v1+v2;
   cout<<x.v3 << y.v3<<endl;
 
    return 0;
} 