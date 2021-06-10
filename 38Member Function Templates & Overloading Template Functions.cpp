// Member Function Templates & Overloading Template Functions
#include<bits/stdc++.h>
using namespace std;

template<class T>

class mehak{
    T data;
    public:
    mehak(T a){
        data = a;
    }
    void display();
};

template<class T>
void mehak<T> :: display(){
    cout<<"data is "<<data<<endl;
}

void num( int a ){
    cout<<"the value of a is "<<a<<endl;
}

template<class T>

void num( T a ){
    cout<<"the value of a is(by func 2) "<<a<<endl;
}

int main(){

    num(4.9);
    mehak <float> m (7.3);
    m.display();
}