// vector
#include<bits/stdc++.h>
using namespace std;
template<class T>
void display(vector<T>v){
    for(int i =0; i <v.size(); ++i){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    // ways to initialize vector 
    vector<char> v1(6, 'A');
    cout<<"v1 ";
    display(v1);
    vector<char> v2(v1);
    cout<<"v2 ";
    display(v2);
    vector<int> v;
    cout<<"v ";
    display(v);

    // cout<<"enter an integer"<<endl;
    // for (int i = 0; i < 3; i++)
    // {
    //     int t;
    //     cin>>t;
    //     v.push_back(t);
    // }

    vector <int> :: iterator i = v.begin();
    cout<<"v ";
    display(v);

    v.insert(i,5);
    display(v);

    
}