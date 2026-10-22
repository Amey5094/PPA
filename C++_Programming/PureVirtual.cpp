#include<iostream>
using namespace std;

class Base{
    public: 
        int i ,j;
        int Addition(int No1, int No2){
            return No1 + No2;
        }
       virtual int Substrataction(int No1,  int No2) = 0;
};
class Derived : public Base{
    public:
        int x;
        
};
int main(){
    Base bobj;     //error
    Derived dobj;  //error
    return 0;
}