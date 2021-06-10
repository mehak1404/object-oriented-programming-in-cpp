/** IN THE NAME OF ALMIGHTY LORD KRISHNA**/

#include <bits/stdc++.h>
using namespace std;

class Y;

class X {
	int data;
public:
	void setvalue(int val) {
		data = val;
	}
	friend void addxy(X x, Y y);
};
class Y {
	int num;
public:
	void setvalue(int val) {
		num = val;
	}
	friend void addxy(X x, Y y);
};

void addxy(X x, Y y) {
	cout << "the sum of the values of the classes X and Y is " << x.data + y.num;
}
int main() {

// #ifndef ONLINE_JUDGE
// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
// #endif
	X a;
	Y b;
	a.setvalue(5);
	b.setvalue(7);

	addxy(a, b);

	return 0;
}