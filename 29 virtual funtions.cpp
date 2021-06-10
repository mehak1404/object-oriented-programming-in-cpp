// virtual funtions
#include<bits/stdc++.h>
using namespace std;

class Base {
    public:
    int bvar;
    virtual void display(){
        cout<<" the value of the base variable is "<< bvar<<endl;
    }
};
class Derived : public Base{
    public:
    int dvar = 43;
    void display(){
        cout<<" the value of the base variable is "<< bvar<<endl;
        cout<<" the value of the derived variable is "<< dvar<<endl;
    }
};

int main(){

    Base * basePointer;
    Derived obj;
    basePointer = &obj; 
    basePointer->bvar = 54;
   
    basePointer->display(); //virtual function allows the pointer to override 
    // the functions of the class.
    
    return 0;
}