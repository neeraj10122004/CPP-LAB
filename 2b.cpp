#include<iostream>
using namespace std;

class a{
    private:
    int n;
    public:
    a(){
        n=0;
        cout<<"default"<<endl;
    }
    a(int n){
        this->n=n;
        cout<<"parameterised"<<endl;
    }
    ~a(){
        cout<<"closed "<<n<<endl;
    }
};

int main(){
    a a1;
    a a2(2);
    return 0;
}