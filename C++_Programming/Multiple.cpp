#include <iostream>
using namespace std;
class BaseA{
    public:
    int i,j;
    BaseA(){
        cout<<"Inside BaseA Constructor\n";
    };
    ~BaseA(){
        cout<<"Inside BaseA Distructor\n";
    };
    void fun(){
        cout<<"Inside BaseA fun\n";
    };

};
class BaseB{
    public:
    int x,y;
 BaseB(){
        cout<<"Inside BaseB Constructor\n";
    };
    ~BaseB(){
        cout<<"Inside BaseB Distructor\n";
    };
    void gun(){
        cout<<"Inside BaseB gun\n";
    };
};
class Derived:public BaseA,BaseB{
    public:
    int a;
    Derived(){
        cout<<"Inside Derived Constructor\n";
    };
    ~Derived(){
        cout<<"Inside Derived Distructor\n";
    };
    void run(){
        cout<<"Inside Derived run\n";
    };

};
int main(){
    Derived dobj;
    cout<<sizeof(BaseA);
    cout<<sizeof(BaseB);
    cout<<sizeof(Derived);
    

    return 0;
}