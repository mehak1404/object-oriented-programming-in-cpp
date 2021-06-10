/** IN THE NAME OF ALMIGHTY LORD KRISHNA**/

#include <bits/stdc++.h>
using namespace std;

class simple
{
	int x,y,z;
public:
	simple(int a, int b = 8, int  c = 5){
		x = a;
		y = b;
		z = c;
	}
	void printData(){
		cout<<"the value of the data is "<<x<<" and "<<y<<" and "<<z<<endl;
	}


};
int main() {
	
// #ifndef ONLINE_JUDGE
// freopen("input.txt", "r", stdin); 
// freopen("output.txt", "w", stdout);
// #endif

	simple p(2);
	simple q(5,2);
	simple r(1,23,68);
	p.printData();
	q.printData();
	r.printData();

	
	return 0;
}