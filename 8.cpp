#include<iostream>
#include<cstring>
using namespace std;

class age_exception:public exception{
    public:
    char* c;
    age_exception(){};
    age_exception(char* c){
        this->c=c;
    }
    const char* what() const throw(){
        return "error";
    }
};
int main(){
    try{
        throw age_exception();
    }
    catch(const exception& e){
        cout<<e.what()<<endl;
    }
    return 0;
}