#include<iostream>
using namespace std;
class complex{
    int a, b;
    public:
    complex(void);
    void printnumber(){
        cout<<" the value of the a and b"<< a<<" "<<b<<endl;
    }
};
complex:: complex(void){
    a=10;
    b=33;
}
int main(){
    complex harray, lovish;
    harray.printnumber();
    harray.printnumber();
    return 0;
}