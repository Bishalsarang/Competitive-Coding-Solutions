//Author : Bishal Sarang
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector <int> vect(n);
	long freq[1001] = {};
	for(int i = 0; i < n; i++)
		{
			cin >> vect[i];
			freq[vect[i]]++;
		}
	int maxm = *max_element(freq, freq + 1001);
	int count = 0;
	for(int i = 1; i <= 1000; i++)
		if(freq[i])
			count++;
	cout << maxm << " " << count;
            return 0;
}