#include<iostream>
using namespace std;

template <typename t>
t add(t t1,t t2){
    return t1+t2;
}

int main(){
    int a,b;
    cin>>a>>b;
    cout<<add(a,b)<<endl;
    float c,d;
    cin>>c>>d;
    cout<<add(c,d)<<endl;
    return 0;
}