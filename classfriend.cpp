#include <iostream>
using namespace std;
class myclass {
    friend class myanotherclass;
    private:
        int secret=10;
        
};
 class myanotherclass{
     public:
     void showsecret(myclass mc)
     {
         mc.secret++;
         cout<<mc.secret<<endl;
     }
 };

int main() {
    myclass mc;
    myanotherclass mac;
    mac.showsecret(mc);
    return 0;
}