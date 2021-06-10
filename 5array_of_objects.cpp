/** IN THE NAME OF ALMIGHTY LORD KRISHNA**/
//array of objects
#include <bits/stdc++.h>
using namespace std;

class Employee{
	int id;
	int salary;
public:
	void setId(void){
		salary = 500;
		cout<<"enter the id"<<endl;
		cin>>id; 
	}
	void getId(void){
		cout<< "the id is "<<id<<endl;
	}
};

int main() {
	
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif

	Employee fb[100];

	for (int i = 0; i < 4; ++i)
	{
		fb[i].setId();
		fb[i].getId();
	}

	return 0;
}