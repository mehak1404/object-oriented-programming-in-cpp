// Initialization list in constructors

#include<bits/stdc++.h>
using namespace std;

class A {
    int a;
    int b;
public:
    // A(int i, int j) : a(j), b(i)
    A(int i, int j) : a(j), b(a*i)
    // A(int i, int j) : b(j), a(a*i) this won't work coz a is initialllized first
    {
        cout<<"the value of a is "<<a<<endl;
        cout<<"the value of b is "<<b<<endl;
    }     
};
int main(){

    A m(5,8);

    return 0;

}