/** IN THE NAME OF ALMIGHTY LORD KRISHNA**/

// friend functions

#include <bits/stdc++.h>
using namespace std;

class Complex {
	int a, b;

public:
	friend Complex getSum(Complex o1, Complex o2);
	void setnumber(int n1, int n2) {
		a = n1;
		b = n2;
	}
	void printNum() {
		cout << "Your number is " << a << " + " << b << "i" << endl;
	}
};
Complex getSum(Complex o1, Complex o2) {
	Complex o3;
	o3.setnumber(o1.a + o2.a, o1.b + o2.b);
	return o3;
}
int main() {

// #ifndef ONLINE_JUDGE
// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
// #endif

	Complex c1, c2, sum;
	c1.setnumber(3, 4);
	c2.setnumber(5, 7);
	sum = getSum(c1, c2);
	c1.printNum();
	c2.printNum();
	sum.printNum(); 




	return 0;
}
/*
	Properties of the friend functions

	1.  it is out of scope of the class
	2. since it is not in the scope of the class it cannot be called by the object of the class
	3. can be invoked without any object
	4. usually take objects as arguments
	5. can be declared in public or private both works
	6. it can't access the members of class directly and the way is (obj_name.memvername)
*/