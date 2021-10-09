#include <iostream>
using namespace std;

void volume(int a) 
{
    cout << "the volume of cube is  " <<a*a*a;
}

void volume(int l,int b,int h) {
    cout << "the volume of cuboid is " << l*b*h << endl;
}

void volume(float r) {
    cout << "the volume of circle is  " << 3.14*r*r*r << endl;
}
void volume(int r,int h){
    cout<<"the volume of the cylinder is "<<3.14*r*r*h;
}
int main() {

    int a = 5;
    int h =5;
    int r =7.5;
    int l =4;
    int b =5;

    // call function for cube 
    volume(a);

    // call function for cuboid
    display(l,b,h);

    // call function for circle 
    volume(r);
    // call function for cylinder 
    volume(r,h);

    return 0;
}