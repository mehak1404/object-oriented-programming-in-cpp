#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){

    ifstream in("sample32.text");
    while (in.eof() == 0)
    {
        string s;
        getline(in,s);
        cout<<s<<endl;
    }
    in.close();
    
    return 0;
}