// "this" operator in cpp 

#include<bits/stdc++.h>
using namespace std;

class A {
    int a;
    public:
    void setdata(int a){

        this->a = a;
    }
    void getdata(){
        cout<<" the value of a is "<<a<<endl;
    }
};

int main(){
    A a;
    a.setdata(48);
    a.getdata();

    return 0;
}