//  calculator exercise
#include <bits/stdc++.h>
using namespace std;

class Simple_Calculator
{

public:
    void do_sum(int, int);
    void do_multiply(int, int);
    void do_diff(int, int);
    void do_divide(int, int);
};

void Simple_Calculator ::do_sum(int a, int b)
{
    int sum = a + b;
    cout << "the sum is " << sum << endl;
}
void Simple_Calculator ::do_diff(int a, int b)
{
    int diff = a - b;
    cout << "the diff is " << diff << endl;
}
void Simple_Calculator ::do_multiply(int a, int b)
{
    int product = a * b;
    cout << "the product is " << product << endl;
}
void Simple_Calculator ::do_divide(int a, int b)
{
    float divide = a / b;
    cout << "the division is " << divide << endl;
}

class Scientific_Calculator : public Simple_Calculator
{

public:
    void do_log(int);
    void do_squareroot(int);
    void do_raisetopower(int, int);
    void do_tan(int);
};
void Scientific_Calculator ::do_log(int a)
{
    float logr = log10(a);
    cout << "the log is " << logr << endl;
}
void Scientific_Calculator ::do_squareroot(int a)
{
    float sqroot = sqrt(a);
    cout << "the square root is " << sqroot<< endl;
}
void Scientific_Calculator ::do_raisetopower(int a, int b)
{
    int ans = pow(a, b);
    cout << a << " raise to power " << b << " equals " << ans << endl;
}
void Scientific_Calculator ::do_tan(int a)
{
    float tangent = tan(a);
    cout << "the tangent is " << tangent << endl;
}

int main()
{

    Scientific_Calculator M;

    M.do_diff(455, 654);
    M.do_divide(349, 134);
    M.do_multiply(2278, 389);
    M.do_sum(293, 332);
    M.do_log(7283);
    M.do_raisetopower(372, 3);
    M.do_squareroot(34455);
    M.do_tan(384);

    return 0;
}