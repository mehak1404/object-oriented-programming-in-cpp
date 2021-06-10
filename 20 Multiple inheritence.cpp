// Multiple inheritence

#include <bits/stdc++.h>
using namespace std;

class base1
{
protected:
    int base1;

public:
    void setbase1(int a)
    {
        base1 = a;
    }
};
class base2
{
protected:
    int base2;

public:
    void setbase2(int a)
    {
        base2 = a;
    }
};
class Derived :public base1, public base2{
    public :
        void display(){
            cout << "the value of the base1 and base2 is "
                 << base1
                 << " "
                 << base2
                 << " respectively." << endl;
        }
};

int main()
{
    Derived Mehak;
    Mehak.setbase1(45);
    Mehak.setbase2(67);

    Mehak.display();

    return 0;
}