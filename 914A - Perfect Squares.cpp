//Author : Bishal Sarang
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector <int> vect(n);
	map <int, bool> perfect;
	for(int i = 0; i <= 1000; i++)
		perfect[i * i] = true;
	int maxm = INT_MIN;
	for(int i = 0; i < n; i++)
	{
		cin >> vect[i];
		if(!perfect[vect[i]])
			maxm = max(maxm, vect[i]);
	}
	
	cout << maxm;
            return 0;
}