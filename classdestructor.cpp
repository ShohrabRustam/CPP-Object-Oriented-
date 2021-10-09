#include<iostream>
using namespace std;
class Book
{
    private:
    string name;
    public:
    Book()
    {
        cout<<"Constructor is called"<<endl;
    }
    ~Book()
    {
        cout<<"Deconstructor is called"<<endl;
    }
};
int main()
{
    Book b1;
    cout<<"we are in line 1"<endl;
    cout<<"we are in line 2"<endl;
    cout<<"we are in line 3"<endl;
    return 0;
} 