/** IN THE NAME OF ALMIGHTY LORD KRISHNA**/

// // parametric constructors


#include <bits/stdc++.h>
using namespace std;

class Complex{
	int a,b;
public:
	// creating a constructor
	// constructors are the special type of member functions which have name same as of the class
	// they are invoked automatically
	// they are used to initialize the object of the classes
	Complex(int, int); // since it is not acceptiong any argument so it is called default const.
	void printComplex(){
		cout<<"your complex number is "<<a<<"+"<<b<<"i"<<endl;
	}

};

Complex :: Complex(int x, int y){
	a = x;
	b = y;
}

int main() {
	
// #ifndef ONLINE_JUDGE
// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
// #endif

	

	// implicit call
	Complex c1(2,4);// --> this is parameteric constructor as it is taking two parameters
	// explicit call
	Complex c2 = Complex(4,5);
	c1.printComplex();
	c2.printComplex();

	return 0;
}
