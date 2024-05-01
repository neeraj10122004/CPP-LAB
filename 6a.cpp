#include<iostream>
using namespace std;

class a{
    public:
    int i;
    a copy(a &a1){
        return a1;
    }
};
a hi(a &te){
    te.i=te.i*te.i;
    return te;
}
int main(){
    a a1;
    a1.i=10;
    a a2=a1.copy(a1);
    cout<<a2.i<<endl;
    a2=hi(a2);
    cout<<a2.i<<endl;
    return 0;
}