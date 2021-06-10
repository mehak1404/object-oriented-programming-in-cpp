/** IN THE NAME OF ALMIGHTY LORD KRISHNA**/
// Inheritence
#include <bits/stdc++.h>
using namespace std;
// Base class 
class Employee{
public: 
	int id;
	int salary;
	Employee(int inpId){
		id = inpId;
		salary = 14000;
	}
	Employee(){}
};
// derived class 
// class {{derived class name}} : {{visibility mode}} {{base class name}}
// {
// 	methods/members/etc..
// };
class coder : Employee {
	int language;
	public:
	coder(int inpid){
		id = inpid;
		language = 1;
	}
	void getData(){
		cout<<id<<endl
			<<language<<endl;
			
			
	}
};
int main() {
	
// #ifndef ONLINE_JUDGE
// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
// #endif
	string pass;
	cout<<"enter your password to start the program"<<endl;
	cin>>pass;
	Employee raghav = Employee(45);
	cout<<raghav.id<<endl;
	cout<<raghav.salary<<endl;
	
	coder mehak(264);
	mehak.getData();
	



	
	return 0;
}
/*
NOTES: 
	-> visibility mode is of two types i.e public and private
	-> by default it is private and we used the private in above example
	-> in private visibility mode the public members of base class becomes private members of derived class
	-> in public visibility mode the public members of the bade class becomes public members of the derived class
	-> private members can't be inherited by derived class

*/