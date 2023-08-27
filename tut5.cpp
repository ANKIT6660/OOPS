#include<iostream>
using namespace std;
class employee{
    int id;
    int salary;
    public:
    void setId(void){
        salary=122;
        cout<<"enter the id of employee"<<endl;
        cin>>id;
    }
    void getdata(){
        cout<<"the id of this employee is"<<id<<endl;
    }
};
int main(){
    employee fb[4];
    for( int i=0; i<4; i++){
        fb[i].setId();
        fb[i].getdata();
    }
    return 0;
}