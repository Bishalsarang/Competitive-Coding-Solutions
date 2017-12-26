//Author : Bishal Sarang
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n, m;
	cin >> n >> m;
	string a;
	cin >> a;
	while(m--)
	{
	int l, r;
	cin >> l >> r;
	char c_1, c_2;
	cin >> c_1 >> c_2;
	for(int i = l - 1; i <= r - 1; i++)
	{
		if(a[i] == c_1 )
			a[i] = c_2;
	
	}
//	cout << a << " ";
	}
	cout << a;
	return 0;
}