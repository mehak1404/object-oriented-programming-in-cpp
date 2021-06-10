// solving Ambiguity
#include<bits/stdc++.h>
using namespace std;

class base1{
    public:
    void greet(){
        cout<<"hello I'm base 1"<<endl;
        
    }
};
class base2{
    public:
    void greet(){
        cout<<"hello I'm base 2"<<endl;

    }
};

class derived : public base1, public base2{
    public:
    void greet(){
        base1 ::greet();
    }
};

int main(){

    base1 A;
    base2 B;
    derived C;

    A.greet();
    B.greet();
    C.greet();

    return 0;
}
