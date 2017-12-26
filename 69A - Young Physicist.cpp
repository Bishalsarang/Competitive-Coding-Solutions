#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin >>n;
	int x = 0, y = 0, z =0;
	int x_comp = 0, y_comp = 0, z_comp =0;
	while(n--)
	{
		
		
		cin >> x >> y >> z;
		x_comp = x_comp + x;
		y_comp = y_comp + y;
		z_comp = z_comp + z;
	}
	if(!x_comp && !y_comp && !z_comp)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}