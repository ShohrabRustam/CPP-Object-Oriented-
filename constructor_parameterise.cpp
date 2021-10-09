// C++ program to demonstrate the use of default constructor

#include <iostream>
using namespace std;

// declare a class
class  point {

  private:
       double x,y;

   public:
    // create a constructor
    point(double a,double b) {
       cout<<"constructor is call automatically";
        // initialize private variable
        x=a;
        y=b;
    }
    void displaypoint()
    {
        cout<<"the value of x= "<<x<<"the value of y = "<<y<<endl;
    }
};

int main() {

    // create an object
    point p(6,5);
    p.displaypoint();

    return 0;
} 