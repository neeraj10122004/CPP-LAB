#include<iostream>
using namespace std;

class a{
    public:
    int aa,b;
    a(int aa,int b){
        this->aa=aa;
        this->b=b;
    }
    void print(){
        cout<<aa<<" "<<b;
    }
};

int main(){
    a a1(1,2);
    cout<<a1.aa<<endl;
    cout<<a1.b<<endl;
    a1.print();
    return 0;
}