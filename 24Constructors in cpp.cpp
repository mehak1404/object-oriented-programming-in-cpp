//Constructors in cpp

/*
                        ORDER OF EXECUTION
Case 1
    class A : class B{
        contructor of B will be called first then 
        constructor of A will be called.
    } 
Case 2
    class C : class A, class B{
        contructor of A then constructor of B then of C will be 
        called
    }
Case 3
    class C : class A, virtual class B{
        constructor of B will be called first then of A and
        then of C will be called.
    }



*/
#include <bits/stdc++.h>
using namespace std;

class base1
{
    int data1;

public:
    base1(int a)
    {
        data1 = a;
        cout << "constructor base1 is called" << endl;
    }
    void printdata()
    {
        cout << "the value of data1 is " << data1 << endl;
    }
};
class base2
{
    int data2;

public:
    base2(int a){
        data2 = a;
        cout << "constructor base2 is called" << endl;
    }
    void printdata(){
        cout << "the value of data2 is " << data2 << endl;
    }
};

class derived : public base1, virtual base2{
    int data3;

public:
    derived(int a, int b, int c):base1(a), base2(b) {
        data3 = c; 
        cout<<"derived constructor is called"<<endl;
    }
    void printdata(){
        base1 :: printdata();
        base2 :: printdata();
        cout<<"the value of data3 is "<<data3<<endl;
    }
};

int main(){
    derived Mehak(2,4,5);
    Mehak.printdata();
    return 0;
}