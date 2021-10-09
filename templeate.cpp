#include <iostream>
using namespace std;
template <class T>
class charfinder
{
charfinder(T a)
{
    cout<<"this is not a valid char"<<endl;
}
template<>
class charfinder<char>
public:
charfinder(char a)
{
    cout<<"this is a valid char "<<endl;
}
};	
int main()
{
	charfinder<int> int1(2);
	charfinder<float> flo1(2.4);
    charfinder<char> cha1('A')
	return 0;
}