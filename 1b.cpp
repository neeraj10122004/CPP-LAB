#include<iostream>
using namespace std;

class a{
    public:
    void swap(int &a,int &b){
        int temp=a;
        a=b;
        b=temp;
    }
    void swap(float &a,float &b){
        float temp=a;
        a=b;
        b=temp;
    }
};

int main(){
    a swap;
    int a,b;
    cout<<"enter two int numbers"<<endl;
    cin>>a>>b;
    cout<<"initial : "<<a<<" "<<b<<endl;
    swap.swap(a,b);
    cout<<"final : "<<a<<" "<<b<<endl;
    float a1,b1;
    cout<<"enter two float numbers"<<endl;
    cin>>a1>>b1;
    cout<<"initial : "<<a1<<" "<<b1<<endl;
    swap.swap(a1,b1);
    cout<<"final : "<<a1<<" "<<b1<<endl;
    return 0;
}