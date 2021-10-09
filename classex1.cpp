#include<iostream>
using namespace std;
class Book
{
    public:
    int id;
    void input()
    {
        cin >>id;
    }
    void print()
    {
        cout<<"the is is ="<<id;
    }
};
int main()
{
    Book b1;
    b1.input();
    b1.print();
    return 0;
}