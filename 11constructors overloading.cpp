/** IN THE NAME OF ALMIGHTY LORD KRISHNA**/

// constructors overloading

#include <bits/stdc++.h>
using namespace std;

class Complex{
	int a,b;
public:
	Complex(int, int);
	Complex(int); // since it is not acceptiong any argument so it is called default const.
	void printComplex(){
		cout<<"your complex number is "<<a<<"+"<<b<<"i"<<endl;
	}

};

Complex :: Complex(int x, int y){
	a = x;
	b = y;
}

Complex :: Complex(int x){
	a = x;
	b = 0;
}

int main() {
	
// #ifndef ONLINE_JUDGE
// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
// #endif

	

	// implicit call
	Complex c1(2,4);// --> this is parameteric constructor as it is taking two parameters
	// explicit call
	Complex c2 = Complex(4);
	c1.printComplex();
	c2.printComplex();

	return 0;
}
