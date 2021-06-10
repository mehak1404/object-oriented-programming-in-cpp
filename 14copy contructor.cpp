/** IN THE NAME OF ALMIGHTY LORD KRISHNA**/
// copy contructor
#include <bits/stdc++.h>
using namespace std;

class number
{
	int a;
public:
	number(){};
	number(int x){
		a = x;
	}

	//this is a copy constructor when there is no 
	// constructor present compiler provides a default copy constructor
	number(number &obj){
		cout<<"copy constructor called"<<endl;
		a = obj.a;
	}
	void display(){
		cout<<"the value of number is "<<a<<endl;
	}
	
};

int main() {
	
// #ifndef ONLINE_JUDGE
// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
// #endif

	number z(5);
	z.display();
	number z1(z);
	z1.display();
	
	number z2 = z;
	return 0;
}
