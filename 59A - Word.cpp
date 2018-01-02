//Author : Bishal Sarang
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	string s;
	cin >> s;
	int len  = s.length();
	int upper= 0, lower = 0;
	for(int i = 0; i < len; i++)
	{
		if(s[i] >= 'a' && s[i] <= 'z')
			lower++;
		else
			upper++;
	}
	if(upper > lower)
		transform(s.begin(), s.end(),s.begin(), ::toupper);
	else
		transform(s.begin(), s.end(),s.begin(), ::tolower);
	cout << s;
	
	return 0;
}