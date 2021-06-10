// lists in stl 

#include<bits/stdc++.h>
using namespace std;
template<class T>

void display(list<T> l ){

    list <int> ::iterator i = l.begin();
    while(i != l.end()){
        cout<<*i<<" ";
        i++;
    }
    cout<<endl;

}

int main(){

    list <int> l1;
    l1.push_back(5);
    l1.push_back(54);
    l1.push_back(25);
    l1.push_back(57);

    display(l1);

    list <char> l2(4);
   
    list <char> :: iterator it = l2.begin();

    *it = 'F';
    it++;
    *it = 'U';
    it++;
    *it = 'C';
    it++;
    *it = 'K';
    it++;

    display(l2);
    
    return 0;
}