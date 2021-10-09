// Add members of two different classes using friend functions

#include <iostream>
using namespace std;

// forward declaration
class ClassB;

class ClassA {
   int data; 
    public:
    void setdata(int value){
        value=data;
      
    }
    friend void add(classA,ClassB);
};
 
   
class ClassB {
   int data; 
    public:
    void setdata(int num){
        num=data;
         
    friend void add(classA,ClassB);
    }
   
};
void add(ClassA o1,ClassB o2)
{
cout<<"the sum of two num differ calss is :"<<o1.data+o2.num<<endsl;
}

int main() {
    ClassA objectA;
    objectA.setdata(150);
    ClassB objectB;
    objectB.setdata(154);
    cout << "Sum: " << add(objectA, objectB);
    return 0;
}// Add members of two different classes using friend functions

#include <iostream>
using namespace std;

// forward declaration
class ClassB;

class ClassA {
   int data; 
    public:
    void setdata(int value){
        value=data;
        friend void add(classA,ClassB);
    }
    
};
   
class ClassB {
   int data; 
    public:
    void setdata(int num){
        num=data;
         friend void add(classA,ClassB);
    
    }
   
};
void add(ClassA o1,ClassB o2)
{
cout<<"the sum of two num differ calss is :"<<o1.data+o2.num<<endsl;
}

int main() {
    ClassA objectA;
    objectA.setdata(150);
    ClassB objectB;
    objectB.setdata(154);
    cout << "Sum: " << add(objectA, objectB);
    return 0;
}