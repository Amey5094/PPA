#include <iostream>
using namespace std;
#pragma pack(1)
class Base
{
public:
    int i, j;
    int Addition(int No1, int No2)
    { // 1000
        return No1 + No2;
    }
    virtual int Substrataction(int No1, int No2) = 0; /// -------
};
#pragma pack(1)
class Derived : public Base
{
public:
    int x;
    int Substrataction(int No1, int No2)
    { ////2000
        return No1 - No2;
    }
    int Multiplication(int No1, int No2)
    { /// 3000
        return No1 * No2;
    }
};
int main()
{
    Derived dobj;
    int Ret = 0;
    cout << "Size of Base class is:" << sizeof(Base) << "\n";
    cout << "Size of Derived class is:" << sizeof(Derived) << "\n";

    Ret = dobj.Addition(11, 10);
    cout << "Addition is : " << Ret << "\n";

    Ret = dobj.Substrataction(11, 10);
    cout << "Substrataction is : " << Ret << "\n";

    Ret = dobj.Multiplication(11, 10);
    cout << "Multiplication is : " << Ret << "\n";

    return 0;
}