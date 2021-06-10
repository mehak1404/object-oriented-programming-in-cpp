//Nesting of member functions

#include <bits/stdc++.h>
using namespace std;

class binary {
private:
	string s;
	int chk_binary(void);
public:
	void read(void);
	void display(void);
	void ones_compliment(void);
};
void binary :: read() {
	cout << "enter a string" << endl;
	cin >> s;
}
void binary :: ones_compliment() {

	if (chk_binary())
	{
		for (int i = 0; i < s.length(); ++i)
		{
			if (s.at(i) == '1')
				s.at(i) = '0';
			else
				s.at(i) = '1';
		}
	}

}
int binary:: chk_binary() {
	for (int i = 0; i < s.length(); ++i)
	{
		if (s.at(i) != '0' && s.at(i) != '1') {
			cout << "Incorrect format!" << endl;
			return 0;
		}
	}
	return 1;
}
void binary:: display() {
	cout << s << endl;
}

int main() {

// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif

	binary a;
	a.read();
	a.display();
	a.ones_compliment();
	a.display();



	return 0;
}