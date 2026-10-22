#include <iostream>
using namespace std;

#pragma pack (1)

class Demo{
    public:
        int i;
        char a;
    private:
        float f;
};

int main()
{
    Demo dobj;

    dobj.i=11;
    dobj.a='A';
    dobj.f=3.14;
    cout <<dobj.i<<"\n";
    cout <<dobj.a<<"\n";
    cout <<dobj.f<<"\n";
    return 0;
}
