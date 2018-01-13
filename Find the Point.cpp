#include <bits/stdc++.h>

using namespace std;

int main() {
	// your code goes here
	int N;
	cin >> N;
	int a, b, c, d;
	while(N--)
	{
		cin >> a >> b >> c >> d;
        
		cout << 2 * c - a <<" " << 2 * d - b << "\n";
	}
	return 0;
}