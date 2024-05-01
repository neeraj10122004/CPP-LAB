#include<iostream>
using namespace std;

class matrix{
    public:
    int r=1;
    int c=1;
    int array[100][100];
    matrix(){};
    matrix(int r,int c){
        this->r=r;
        this->c=c;
    }
    matrix add(matrix m2){
        matrix ret(m2.r,m2.c);
        for(int i=0;i<m2.r;i++){
            for(int j=0;j<m2.c;j++){
                ret.array[i][j]=this->array[i][j]+m2.array[i][j];
            }
        }
        return ret;
    }
    matrix minus(matrix m2){
        matrix ret(m2.r,m2.c);
        for(int i=0;i<m2.r;i++){
            for(int j=0;j<m2.c;j++){
                ret.array[i][j]=this->array[i][j]-m2.array[i][j];
            }
        }
        return ret;
    } 
    matrix multiply(matrix m2){
        matrix ret(this->r,m2.c);
        for(int i=0;i<ret.r;i++){
            for(int j=0;j<ret.c;j++){
                ret.array[i][j]=0;
                for(int k=0;k<m2.r;k++){
                    ret.array[i][j]+=(this->array[i][k]*m2.array[k][j]);
                }
            }
        }
        return ret;
    }
};

int main(){
    matrix m1(3,2);
    matrix m2(2,4);
    cout<<"enter data for matrix 1"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            cin>>m1.array[i][j];
        }
    }
    cout<<"enter data for matrix 2"<<endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            cin>>m2.array[i][j];
        }
    }
    m1=m1.multiply(m2);
    cout<<"output of multiply"<<endl;
    for(int i=0;i<m1.r;i++){
        for(int j=0;j<m1.c;j++){
            cout<<m1.array[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}