#include<iostream>
using namespace std;

class base{
    public:
    void baseshow(){
        cout<<"from base class"<<endl;
    }
};
class derived:public base{
    public:
    void derivedshow(){
        cout<<"from derived class"<<endl;
    }
};

int main(){
    base b1;
    derived d1;
    base *b=&b1;
    derived *d=&d1;
    b->baseshow();
    (*b).baseshow();
    (*d).derivedshow();
    (*d).baseshow();
    return 0;
}