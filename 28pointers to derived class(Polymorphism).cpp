// pointers to derived class(Polymorphism)
// late binding
#include<bits/stdc++.h>
using namespace std;

class Base {
    public:
    int bvar;
    void display(){
        cout<<" the value of the base variable is "<< bvar<<endl;
    }
};
class Derived : public Base{
    public:
    int dvar;
    void display(){
        cout<<" the value of the base variable is "<< bvar<<endl;
        cout<<" the value of the derived variable is "<< dvar<<endl;
    }
};

int main(){
     
    Base * basePointer;
    Derived obj;
    basePointer = &obj; // the base class pointer will point to the object of the derived class

    // it can point to the derived class because base class feature are present
    // in the derived class and the base class pointer can access only those
    // feature like it can't access basepointer->dvar; but can access 
    basePointer->bvar = 54;
    basePointer->display();

    Derived * derivedPointer;
    derivedPointer = &obj;
    derivedPointer->dvar = 65;
    derivedPointer->display();

    return 0;
}