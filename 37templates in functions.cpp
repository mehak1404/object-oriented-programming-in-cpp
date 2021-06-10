// templates in functions
#include<bits/stdc++.h>
using namespace std;

template< class T1, class T2>
float div(T1 a, T2 b){
    float res = (a+b)/2.0;
    return res;
}
int main(){
   
    cout<<div(4.5, 7);
    return 0;  
}