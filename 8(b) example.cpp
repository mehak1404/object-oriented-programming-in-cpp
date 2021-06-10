/** IN THE NAME OF ALMIGHTY LORD KRISHNA**/
// MORE about the friend class and memeber functions
#include <bits/stdc++.h>
using namespace std;
class C2;

class C1 {
	int a;
public:
	void setval(int val) {
		a = val;
	}
	void printval() {
		cout << a << endl;
	}
	friend void swap( C1 &x, C2 &y);
};
class C2 {
	int b;
public:
	void setval(int val) {
		b = val;
	}
	void printval() {
		cout << b << endl;
	}
	friend void swap( C1 &x, C2 &y);
};
void swap(C1 &x, C2 &y)
{
	int temp = x.a;
	x.a = y.b;
	y.b = temp;
}
int main() {

// #ifndef ONLINE_JUDGE
// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
// #endif
	C1 A;
	C2 B;
	A.setval(5);
	B.setval(8);
	cout << "Values of A and B are" << endl;
	A.printval();
	B.printval();
	swap(A, B);
	cout << "Values of A and B after swapping" << endl;
	A.printval();
	B.printval();

	return 0;
}