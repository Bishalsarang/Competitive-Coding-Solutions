//Author : Bishal Sarang
#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	getline(cin, s);
	int len = s.size();
	set <char> alphas;
	int j = 0;
	for(int i = 0; i < len; i++)
{
	if(s[i] >= 'a' && s[i] <= 'z')
		alphas.insert(s[i]);
	
}
cout << (int)alphas.size();
		
	return 0;
}