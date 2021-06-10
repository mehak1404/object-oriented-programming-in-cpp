/** IN THE NAME OF ALMIGHTY LORD KRISHNA**/

// constructors

#include <bits/stdc++.h>
using namespace std;

class Complex{
	int a,b;
public:
	// creating a constructor
	// constructors are the special type of member functions which have name same as of the class
	// they are invoked automatically
	// they are used to initialize the object of the classes
	Complex(void); // since it is not acceptiong any argument so it is called default const.
	void printComplex(){
		cout<<"your complex number is "<<a<<"+"<<b<<"i"<<endl;
	}

};

Complex :: Complex(void){
	a = 10;
	b = 5;
}

int main() {
	
// #ifndef ONLINE_JUDGE
// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
// #endif

	Complex c1,c2;
	c1.printComplex();
	c2.printComplex();

	return 0;
}
/*  Characteristics of Constructors

1. It should be declared in the public section of the class 
2. They are automatically invoked whenever the object is created 
3. They cannot return values and do not have return types
4. It can have default arguments 
5. We cannot refer to their address

*/