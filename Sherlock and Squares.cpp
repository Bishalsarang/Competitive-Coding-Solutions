#include <bits/stdc++.h>
using namespace std;
int magic(int x, int y)
{
	int maxm = max(x,y);
	int org = maxm;
	int minm = min(x, y);
	maxm = ceil(sqrt(maxm));
	minm = ceil(sqrt(minm));
	int count = 0;
	int i = minm;
	while( i * i <= org )
				{
					count++;
					i++;
				}
	return count;
}
int main() {
	// your code goes here
	int T;
	cin >> T;
	int a, b;
	while(T--)
	{
		cin >> a >> b;
		cout <<	magic(a,b) << "\n";
	}
	return 0;
}