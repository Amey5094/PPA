#include<iostream>
using namespace std;



int main(){
 Base *bp = new Derived();
    bp->fun();
    bp->gun();
    bp->sun();
    bp->run();
    // bp->mun();   // error
    // bp->bun();   // error

    return 0;
}
#pragma pack(1)
class Base{
    public:
    int i ,j;
    void fun()
    {cout<<"Base Fun\n"  ;}   //1000
    void gun()
    {cout<<"Base Gun\n"  ;}   //2000
    virtual void sun()
    {cout<<"Base Sun\n"  ;}   //3000
    virtual void run()
    {cout<<"Base Run\n";  }  //4000
}; // 16bytes
#pragma pack(1)
class Derived: public Base{
    public:
    int x;
    void fun()
    {cout<<"Derived Fun\n" ; }    //5000
     void sun()
    {cout<<"Derived Sun\n" ; }   //6000
    virtual void mun()
    {cout<<"Derived Mun \n";}   //7000
    void bun()
    {cout<<"Derived Bun \n";}   //8000
}// 20bytes
