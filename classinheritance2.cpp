#include <iostream>
using namespace std;

class parent
{
    public:
    int set(int x,int y)
    {
        x=a;
        y=b;
    }
    int sum()
    {
        return (a+b);
    }
    protected:
    int a,b;
};
class child : public parent
{
public:
   int mul()
   {
       return (a*b);
   }
};
int main()
{
      child c1;
      c1.set(3,15);
      std ::cout << sum();
      std::cout<<mul();
}