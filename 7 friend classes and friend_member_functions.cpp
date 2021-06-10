/** IN THE NAME OF ALMIGHTY LORD KRISHNA**/
// friend classes and friend member functions

#include <bits/stdc++.h>
using namespace std;
// forward declaration
class complexnum;

class calculator {
public:
	int sumReal(complexnum o1, complexnum o2);
	int sumImg(complexnum o1, complexnum o2);
};		


class complexnum {
	int a, b;
	// allowing some member function as friend member
	// friend int calculator :: sumReal(complexnum o1, complexnum o2);
	// friend int calculator :: sumImg(complexnum o1, complexnum o2);
	// making the class as friend class
	friend class calculator;
public:
	void setnumber(int n1, int n2){
		a = n1;
		b = n2;
	}
	void printNum() {
		cout << "Your number is " << a << " + " << b << "i" << endl;
	}
};
int calculator :: sumReal(complexnum o1, complexnum o2){
		return (o1.a + o2.a);
	}		
int calculator :: sumImg(complexnum o1, complexnum o2){
		return (o1.b + o2.b);
	}		

int main() {

// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif

	complexnum c1, c2;
	c1.setnumber(3,5);
	c2.setnumber(2,8);
	calculator sum,sumi;
	int res = sum.sumReal(c1,c2);
	cout<<"The sum of the real part of c1 and c2 is "<<res<<endl;
	int resi = sumi.sumImg(c1, c2);
	cout<<"The sum of the imaginary part of c1 and c2 is "<<resi<<endl;
	return 0;
}