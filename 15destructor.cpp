/** IN THE NAME OF ALMIGHTY LORD KRISHNA**/
// destructor
#include <bits/stdc++.h>
using namespace std;

int cnt = 0;

class num
{	
	// static int count;	
public:
	num(){
		cnt++;
		cout<<"contructor is being called for the object"<<cnt<<endl;
	}
		;
	~num(){
		cout<<"destructor is being called for the object"<<cnt<<endl;
		cnt--;
	}
	
};

int main() {
	
// #ifndef ONLINE_JUDGE
// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
// #endif

	cout<<"In main funtion"<<endl;
	cout<<"creating first object"<<endl;
	num ob1;
	cout<<"Entering the block"<<endl;
	{
		cout<<"creating two more objects"<<endl;
		num ob2, ob3;
		cout<<"leaving block"<<endl;
	}
	cout<<"back in main and program is going to finish"<<endl;

	
	return 0;
}