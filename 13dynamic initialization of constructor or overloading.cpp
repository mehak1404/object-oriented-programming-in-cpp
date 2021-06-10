/** IN THE NAME OF ALMIGHTY LORD KRISHNA**/
//dynamic initialization of constructor or overloading
#include <bits/stdc++.h>
using namespace std;

class bankDeposit
{
	int principal,year;
	float interestrate;
	float returnvalue;
public:
	bankDeposit(){};
	bankDeposit(int p, int y, int r); //when the rate is in percentage 
	bankDeposit(int p, int y, float r); //when rate is in .05 form 
	void show(){
		cout<<"the pricipal amount was "<<principal<<"."
		    <<endl<<"After "<<year<<" years, the Return value is "
		    <<returnvalue<<endl;
	}
	
};
bankDeposit:: bankDeposit(int p, int y, float r){
	principal = p;
	year = y;
	interestrate = r;
	returnvalue = p;
	for (int i = 0; i < year; ++i)
	{
		returnvalue *= (1+interestrate);
	}
}
bankDeposit:: bankDeposit(int p, int y, int r){
	principal = p;
	year = y;
	interestrate = float(r)/100;
	returnvalue = p;
	for (int i = 0; i < year; ++i)
	{
		returnvalue *= (1+interestrate);
	}
}

int main() {
	
// #ifndef ONLINE_JUDGE
// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
// #endif
	float r = .03;
	bankDeposit a(100,3,r);
	a.show();
	bankDeposit b(100,3,3);
	b.show();
	bankDeposit c;
	// c.show();


	
	return 0;
}