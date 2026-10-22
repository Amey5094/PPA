#include<iostream>
using namespace std;



int main(){
 Base *bp = new Derived();
    cout<<sizeof(Base)<<"\n";
    cout<<sizeof(Derived)<<"\n";
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
    {cout<<"Base Fun\n"  ;}
    void gun()
    {cout<<"Base Gun\n"  };
    virtual void sun()
    {cout<<"Base Sun\n"  };
    virtual void run()
    {cout<<"Base Run\n"  };
}; // 16bytes
#pragma pack(1)
class Derived: public Base{
    public:
    int x;
    void fun()
    {cout<<"Derived Fun\n"  };
     void sun()
    {cout<<"Derived Sun\n"  };
    virtual void mun()
    {cout<<"Derived Mun \n"};
    void bun()
    {cout<<"Derived Bun \n"};
}// 20bytes
