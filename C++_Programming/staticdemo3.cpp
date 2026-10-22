#include <iostream>
using namespace std;

class Demo {
    public:
    int No1;
    int No2;
    static int X;
    Demo (int i, int j){
        No1=i;
        No2=j;
    }
    void fun(){
        cout<<"Inside Fun\n";
        cout<<No1<<"\n";
        cout<<No2<<"\n";
        cout<<X<< "\n";
    }
    static gun(){
        cout<<"Inside Gun\n";
        cout<<X<<"\n";
    }
    
};
int Demo::X=11;
int main(){
    cout<<Demo::X<<"\n";
    cout<<Demo::gun()<<"\n";

    return 0;
}