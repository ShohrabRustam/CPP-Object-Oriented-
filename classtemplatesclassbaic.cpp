#include <iostream>
using namespace std;

template <class T>
class Maths
{
private:
	T num1, num2;
	
public:
	Maths(T n1, T n2)
	{
		num1 = n1;
		num2 = n2;
	}
    T max()
    {
return(num1>num2?num1:num2);
}
};


	
int main()
{
	Maths<int> intm1(2, 1);
	Maths<float> floatm1(2.4, 1.2);
	
	cout << "Int results:" << endl;
	cout<< intm1.max();
	
	cout << "Float results:" << endl;
	cout << floatm1.max()<<endl;
	
	return 0;
}