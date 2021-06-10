// files
#include<iostream>
#include<fstream>
using namespace std;

int main(){
    string s = "my name is mehak";
    string s1;
    ofstream out("sample32.txt");
    out<<s;
    out.close();
    
    ifstream in("sample32.txt");
    getline(in, s1);

    cout<<s1<<endl;

    return 0;
    
}