#include <iostream>
using namespace std;

//class definition
class Shop
{
	private:
        int counter,i;
		int item[];
		int itemprice[];
        
	public:
		//member function declaration
		void itcounter(void){ counter=0;}
        void itemno(void);
		void setprice(void);
		int displayprice(void);
};

//member function definitions

void Shop::setprice(void)
{
	cout<<"enter the id of items"<<endl;
    cin >>item[counter];
    cout<<"enter the price of the item";
    cin>> itemprice[counter];
    counter++;
}

int Shop::displayprice(void)
{
    for(int i=0;i<conter ;i++)
    {

        cout<<"the price of the item with id"<<item[i]<<" is "<<itemprice[i]<<endl;
    }
}

//main function
int main()
{
	//declaring object
    Shop ob;
    ob.itcounter();
    
    ob.setprice();
    ob.setprice();
  
    ob.displayprice();

	
	return 0;	
}