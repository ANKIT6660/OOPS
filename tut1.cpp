#include<iostream>
using namespace std;
class employee{
    private:
    int  b, c;
    public:
    int d, e, a;
    void setdata( int a1, int b1, int c1);
    void getdata(){
        cout<<"the value of the a is"<<a<<endl;
        cout<<"the value of the b is"<<b<<endl;
        cout<<"the value of the c is"<<c<<endl;
        cout<<"the value of the d is"<<d<<endl;
        cout<<"the value of the e is"<<e<<endl;
    }
};
void employee:: setdata(int a1, int b1, int c1){
    a=a1;
    b=b1;
    c=c1;
}
int main(){

    employee harry;
    harry.a=34;
    harry.e=39;
    harry.setdata(1,2,4);
    harry.getdata();
  return 0;
}