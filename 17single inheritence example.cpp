// single inheritence example
#include<iostream>
using namespace std;

class base{
    int data1;
public:
    int data2;
    void setdata1(int inp);
    int getdata1();
    void setdata2(int inp);

    
};
void base :: setdata1(int inp){
    data1 = inp;
    
}
int base :: getdata1(){
    
    return data1;
}
void  base :: setdata2(int inp){
    data2 = inp;
    
}
class derived : public base{
    int data3;
    public:
    void setdata3();
    void display();
};
void derived :: setdata3(){
    data3 = data2 * getdata1();
    
}
void derived :: display(){
    cout<<"the value of data 1 is "<<getdata1()<<endl
        <<"the  value of data 2 is "<<data2<<endl
        <<"the value of data 3 is "<<data3<<endl;
}

int main(){

    derived shweta;

    shweta.setdata1(5);
    shweta.setdata2(60);
    shweta.setdata3();
    shweta.display();
    
    return 0;


}