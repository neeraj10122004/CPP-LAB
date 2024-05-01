#include<iostream>
using namespace std;

class a{
    public:
    int n;
    a(int n){
        this->n=n;
        cout<<"created "<<n<<endl;
    }
    ~a(){
        cout<<"ended "<<n<<endl;
    }
};
int main(){
    a a1(1);
    a a2(2);
    a a3(3);
    return 0;
}