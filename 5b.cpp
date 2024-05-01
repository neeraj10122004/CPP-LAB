#include<iostream>
using namespace std;

class a{
    public:
    static void n(){cout<<"hi"<<endl;};
    virtual void show(){
        cout<<"from a"<<endl;
    }
    void print(){
        cout<<"from a"<<endl;
    }
};
class b:public a{
    void show(){
        cout<<"from b"<<endl;
    }
    void print(){
        cout<<"from b"<<endl;
    }
};

int main(){
    a *a1;
    b b1;
    a1=&b1;
    a1->show();
    a1->print();
    a::n();
    return 0;
}