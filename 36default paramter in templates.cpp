// default paramter in templates
// templates with multiple parameters
#include<bits/stdc++.h>
using namespace std;

template<class T1 = char, class T2 = int>

class myclass{
    T1 a;
    T2 b;
    public:
    myclass(T1 x, T2 y){
        a = x;
        b = y;
    }
    void getdata(){
        cout<<"the value of a and b are " <<a<<" and "<<b<<" respectively"<<endl;
    }
};
int main(){

    myclass < > m('G',7);

    m.getdata();

    return 0;
}