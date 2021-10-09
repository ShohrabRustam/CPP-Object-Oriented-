#include<iostream.h>
#include<conio.h>
using namespace std;
class Binary
{
 string str;
 public:
 void read(void)
{
 cout<<"Enter the Binary Number:";
 cin>>str;
}
 void bin_num(void)
{
 for(int i=0;i<str.length();i++)
{
 if(str.at(i)!='0' && str.at(i)!='1')
{
 cout<<"Incorrect binary number!"
getch();
exit(0);
}
}
}
void binary(void)
{
 bin_num();
 for(i=0;i<str.length();i++)
{
 if(str.at(i)=='0')
 str.at(i)='1';
else
str.at[i]='0';
}
}
void display(void)
{
 binary();
 cout<<"The 1's Complement of this Binary Number is :"<<str;
}
};
int main()
{
 Binary b;
b.read();
b.display();
getch();
return 0;
