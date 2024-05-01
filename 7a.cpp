#include<iostream>
using namespace std;

int main(){

    try{
        throw("arthimatic exception");
    }
    catch(const char* e){
        cout<<e<<endl;
    }
    try{
        int i;
        cin>>i;
        switch(i){
            case 1:
                throw length_error("error");
                break;
            default:
            throw invalid_argument("hi");
        };
    }
    catch(const exception& e){
        cout<<e.what()<<endl;
    }
    return 0;
}