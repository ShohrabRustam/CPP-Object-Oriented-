#include <iostream>
using namespace std;

class parent{
    public:
    int id_p;
};
class child : public parent
{
public:
    int id_c;
};
int main()
{
      child c1;
      c1.id_p=67;
      c1.id_c=167;
      cout<<"the id of child is "<<c1.id_c<<endl; 
cout<<"the id of parents is "<<c1.id_p<<endl;
}