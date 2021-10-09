#include<iostream>
using namespace std;
class Book
{
    private:
    string name;
    public:
    Book()
    {
        cout<<"constructor call auto"<<endl;
    }
    void setName(string x)
    {
        name=x;
    }
    string getName()
    {
        return name;
    }
};
int main()
{
    Book b1;
    b1.setName("Welcome to C++");
    cout<<b1.getName()<<endl;
    return 0;
}