/** IN THE NAME OF ALMIGHTY LORD KRISHNA**/

// program of static data member
//count is the static data member here
#include <bits/stdc++.h>
using namespace std;

class Employee
{
	int id;
	static int count;
public:
	void getData(void){
		cout<<"the id of object number "<<count<<"is " <<id<<endl;
	}
	void setData(void){
		cout<<"enter the id of the objects"<<endl;
		cin>>id;
		cout<<id<<endl;
		count++;
	}
};
int Employee :: count; 
int main() {
	
// #ifndef ONLINE_JUDGE
// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
// #endif
	
	Employee mohan, rohan, madhav, shiv;

	mohan.setData();
	mohan.getData();


	rohan.setData();
	rohan.getData();


	madhav.setData();
	madhav.getData();


	shiv.setData();
	shiv.getData();
	
	return 0;
}