#include<iostream>
using namespace std;
class Book
{
    private:
    string name;
    public:
    Book(string x)
    {
        setName(x);
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
    Book b1("welcome C++");
    cout<<b1.getName()<<endl;
    return 0;
}