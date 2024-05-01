#include<iostream>
using namespace std;

int multiply(int a=1,int  b=1,int c=1){
    return a*b*c;
}

int main(){
    int a,b,c;
    cout<<"enter the nums"<<endl;
    cin>>a>>b>>c;
    cout<<multiply()<<endl;
    cout<<multiply(a)<<endl;
    cout<<multiply(b)<<endl;
    cout<<multiply(c)<<endl;
    cout<<multiply(a,b)<<endl;
    cout<<multiply(b,c)<<endl;
    cout<<multiply(a,c)<<endl;
    cout<<multiply(a,b,c)<<endl;
    return 0;
}