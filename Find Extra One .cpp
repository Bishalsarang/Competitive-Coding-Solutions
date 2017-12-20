//Author : Bishal Sarang
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin >> n;
	int a, b, neg = 0, pos = 0;
	while(n--)
	{
		cin >> a >> b;
		if(a < 0)
			neg++;
		else
			pos++;
	}
	if(neg <= 1 || pos <= 1)
		cout << "Yes \n";
	else cout << "No \n";
	return 0;
}