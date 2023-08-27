#include<iostream>
using namespace std;
class bankdeposit{
    int principal;
    int year;
    float interesteates;
    float returnvalue;
    public:
    bankdeposit(){}
    bankdeposit( int p, int y, float r);
    bankdeposit(int p, int y, int r);
    void show();
};
bankdeposit:: bankdeposit( int p, int y, float r){
    principal =p;
    year=y;
    interesteates=r;
    returnvalue=principal;
    for( int i=0; i<y; i++){
        returnvalue=returnvalue*(1+interesteates);
    }
}
bankdeposit::bankdeposit(int p, int y, int r){
    principal=p;
    year=y;
    interesteates=float(r)/100;
    returnvalue=principal;
    for( int i=0; i<y; i++){
        returnvalue=returnvalue*(1+interesteates);
    }
}
void bankdeposit::show(){
    cout<<endl<<"pricipal amout was"<<principal<<" . return value of the after"<<year<<" year is"<<returnvalue<<endl;
}
int main(){
    bankdeposit bd1, bd2,bd3, bd3;
    int p, y;
    float r;
    int r;
    cout<<" enter the value of the p y and r"<<endl;
    cin>>p>>y>>r;
       bd1 = bankdeposit(p, y, r);
    bd1.show();

    cout<<"Enter the value of p y and R"<<endl;
    cin>>p>>y>>r;
    bd2 = bankdeposit(p, y, r);
    bd2.show();
    return 0;

}