#include<iostream>
using namespace std;

class a{
    public:
    int value=0;
    void show(){
        cout<<0<<endl;
    }
    void show(int n){
        cout<<n<<endl;
    }
    void show(int n,int m){
        cout<<n<<" "<<m<<endl;
    }
    a operator+(a &a1){
        a ret;
        ret.value=this->value+a1.value;
        return ret;
    }
};
class b:public a{
    public:
    void show(){
        cout<<"derived"<<endl;
    }
};
int main(){
    a s1;
    a s3;
    b s2;
    s1.show();
    s1.show(1);
    s1.show(1,2);
    s2.show();
    s1.value=10;
    s3.value=20;
    cout<<s1.value<<" "<<s3.value<<endl;
    s1=s1+s3;
    cout<<s1.value<<" "<<s3.value<<endl;

    return 0;
}