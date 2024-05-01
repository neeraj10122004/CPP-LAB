#include<iostream>
using namespace std;

class a{
    public:
    int n;
    a(int n=0){
        this->n=n;
    }
    void show(){
        cout<<n<<endl;
    }
};
int main(){
    a a1[10];
    for(int i=0;i<10;i++){
        a1[i]=a(i+1);
    }
    for(int i=0;i<10;i++){
        a1[i].show();
    }
    return 0;
}