/** IN THE NAME OF ALMIGHTY LORD KRISHNA**/

#include <bits/stdc++.h>
using namespace std;

class shop{
	int counter;
	int itemId[100];
	int itemPrice[100];
public:
	void initCounter(void){ counter = 0;}
	void setData(void);
	void displayData(void);

};
void shop :: setData(){
	cout<<"enter the id of the item no. "<<counter+1<<endl;
	cin>>itemId[counter];
	cout<<"Enter the price of the item no. "<<endl;
	cin>>itemPrice[counter];
	counter++;
} 
void shop :: displayData(){
	for (int i = 0; i < counter; ++i)
	{
		cout<<"The price of the item with ID "<< itemId[i]<<" is "<<itemPrice[i]<<endl;
	}
}
int main() {
	

	// #ifndef ONLINE_JUDGE
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
	// #endif

	shop liberty;
	
	liberty.initCounter();
	liberty.setData();
	liberty.setData();
	liberty.setData();
	liberty.setData();
	liberty.setData();
	liberty.displayData();




	
	return 0;
}