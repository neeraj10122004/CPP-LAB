#include<iostream>
using namespace std;

class a{
    private:
    int num;
    public:
    a(int num){
        this->num=num;
    }
    friend void show(a a1);
};
class b{
    private:
    int num=0;
    public:
    b(int num){
        this->num=num;
    }
    friend void show(b a1);
    inline void display(){
        cout<<"inline"<<endl;
    }
};

void show(a t1){
    cout<<t1.num<<endl;
}
void show(b t1){
    cout<<t1.num<<endl;
}
int main(){
    a a1(1);
    b b1(2);
    show(a1);
    show(b1);
    b1.display();
    return 0;
}