//Author: Bishal Sarang
#include <bits/stdc++.h>
using namespace std;

int main() {
	string a, b, c;
	int alpha_first[26] = {0}, alpha_second[26] = {0};
	cin >>  a >> b >> c;
	string comb = a + b;
	for(int i = 0; i < comb.length(); i++)
		alpha_first[comb[i] - 'A']++;
	for(int i = 0; i < c.length(); i++)
		alpha_second[c[i] - 'A']++;
	for(int i = 0; i < 26; i++)
		if(alpha_first[i] != alpha_second[i])
			{
				cout << "NO";
				return 0;
				}
			cout << "YES";
			return 0;
}