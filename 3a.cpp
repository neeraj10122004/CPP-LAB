#include<iostream>
using namespace std;

class single{
    public:
    int a;
};
class single1:public single{
    public:
    void show(){
        cout<<a<<endl;
    }
};
class multiple1{
    public:
    int a;
};
class multiple2{
    public:
    int b;
};
class multiple:public multiple1,public multiple2{
    public:
    void show(){
        cout<<a<<" "<<b<<endl;
    }
};

class heirarcy{
    public:
    int a;
};

class heirarcy1:public heirarcy{
    public:
    void show(){
        cout<<a<<endl;
    }
};
class heirarcy2:public heirarcy{
    public:
    void show(){
        cout<<a<<endl;
    }
};
class multilevel1{
    public:
    int a;
};
class multilevel2:public multilevel1{
    public:
    int b;
};
class multilevel:public multilevel2{
    public:
    void show(){
        cout<<a<<" "<<b<<endl;
    }
};
int main(){
    single1 s1;
    s1.a=1;
    s1.show();
    multilevel m;
    m.a=2;
    m.b=3;
    m.show();
    multiple m1;
    m1.b=5;
    m1.a=4;
    m1.show();
    heirarcy1 h1;
    heirarcy2 h2;
    h1.a=23;
    h2.a=43;
    h1.show();
    h2.show();
    return 0;
}