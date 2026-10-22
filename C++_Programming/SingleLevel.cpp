#include <iostream>
using namespace std;

class Base{
    public:
    int i,j;
    Base(){

        cout<<"Inside Base Constructor\n";
    };

    ~Base(){

        cout<<"Inside Base Distructor\n";
    };
    void fun(){
        cout<<"Inside base fun\n";
    };
    void gun(){
        cout<<"Inside base gun\n";
    };

    
};
class Derived:public Base{
    public:
    int x,y;
     Derived(){
        cout<<"Inside Derived Constructor\n";
     }
     ~Derived(){
        cout<<"Inside Derived Distructor\n";
     }
     void sun(){
        cout<<"Inside derive sun\n";
     }

};
int main(){
    cout<<sizeof(Base)<<"\n";
    cout<<sizeof(Derived)<<"\n";
    Derived dobj;
    return 0;
}