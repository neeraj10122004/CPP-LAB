#include<iostream>
#include<queue>
using namespace std;

class Queue{
    private:
    queue<int> q1;
    public:
    void enqueue(int n){
        q1.push(n);
    }
    int dequeue(){
        int ret=q1.front();
        q1.pop();
        return ret;
    }
    int front(){
        if(q1.empty()){
            return 0;
        }
        else{
            return q1.front();
        }
    }
    bool isempty(){
        if(q1.empty()){
            return true;
        }
        else{
            return false;
        }
    }
};
int main(){
    Queue a;
    a.enqueue(1);
    a.enqueue(2);
    a.enqueue(3);
    cout<<a.front()<<endl;
    cout<<a.dequeue()<<endl;
    cout<<a.front()<<endl;
    cout<<a.dequeue()<<endl;
    cout<<a.isempty()<<endl;
    return 0;
}