/** IN THE NAME OF ALMIGHTY LORD KRISHNA**/

#include <bits/stdc++.h>
using namespace std;

class complexnum{
	int a;
	int b;
public:
	void setdata(int v1, int v2){
		a = v1;
		b = v2;
	}
	void setdatabysum(complexnum o1, complexnum o2){
		a = o1.a + o2.a;
		b = o1.b + o2.b;

	}
	void printComplex(){
		cout<<"your complex number is "<<a<<"+"<<b<<"i"<<endl;
	}
};

int main() {
	
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif

	complexnum c1,c2,c3;
	c1.setdata(2,3);
	c2.setdata(4,6);
	c3.setdatabysum(c1,c2);
	c1.printComplex();
	c2.printComplex();
	c3.printComplex();


	
	return 0;
}