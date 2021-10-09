#include <iostream>
using namespace std;

//class definition
class Numbers
{
	private:
		int a;
		int b;
	public:
		//member function declaration
		void readNumbers(void);
		void printNumbers(void);
		int calAddition(void);
};

//member function definitions
void Numbers::readNumbers(void)
{
	cout<<"Enter first number: ";
	cin>>a;
	cout<<"Enter second number: ";
	cin>>b;	
}

void Numbers::printNumbers(void)
{
	cout<<"a= "<<a<<",b= "<<b<<endl;
}

int Numbers::calAddition(void)
{
	return (a+b);
}

//main function
int main()
{
	//declaring object
	Numbers num;
	int add; //variable to store addition
	//take input
	num.readNumbers();
	//find addition
	add=num.calAddition();
	
	//print numbers
	num.printNumbers();
	//print addition
	cout<<"Addition/sum= "<<add<<endl;
	
	return 0;	
}