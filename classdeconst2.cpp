#include<iostream>
using namespace std;
class Book
{
    private:
    string name;
    public:
    Book()
    {
        cout<<"constructor is called";
    }
    ~Book()
    {
        cout<<"Deconstructor is called";
    }
};
int main()
{
    Book b1;
    return 0;
}