/** IN THE NAME OF ALMIGHTY LORD KRISHNA**/

// parametric constructors

#include <bits/stdc++.h>
using namespace std;

class point
{
	int x,y;
public:
	point(int a, int b){
		x = a;
		y = b;
	}
	void getpoint(){
		cout<<"your point is ("<<x<<","<<y<<")"<<endl;
	}
	friend int ptdistance(point, point);
};
int ptdistance(point a, point b){
	return (sqrt((a.x-b.x)*(a.x - b.x) + (a.y-b.y)*(a.y-b.y)));
}
int main() {
	
// #ifndef ONLINE_JUDGE
// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
// #endif

	point p(0,1);
	point q(0,6);

	int distance = ptdistance(p,q);
	cout<<distance;

	
	return 0;
}