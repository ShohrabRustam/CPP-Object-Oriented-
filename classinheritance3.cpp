#include <iostream>
using namespace std;

class shape{
    public:
    void setvalue(int x,int y)
    {
    width=x;
    height=y;
    }
    protected:
    int height;
    int width;
    
};
class cube:public shape{
    public:
    int area()
    {
        return width*width;
    }
};
class rectangle :public shape{
    public:
     int area()
    {
        return height*width;
    }
};
class triangle : public shape
{
    public:
    int area()
    {
        return height*width;
    }
};
int main()
{
    cube c1;
    rectangle r1;
    triangle t1;
    c1.setvalue(3,3);
    cout<<c1.area()<<endl;
    r1.setvalue(3,7);
    cout<<r1.area()<<endl;
    t1.setvalue(3,5);
    cout<<t1.area()<<endl;
    return 0;
}