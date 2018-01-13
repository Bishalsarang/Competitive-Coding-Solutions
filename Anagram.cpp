#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	while(T--)
	{
		string s;
		cin >> s;
		int first_half[26] = {0}, second_half[26] ={0};
		if(s.length() % 2 != 0)
			{
				cout << -1 << "\n";
				continue;
			}
		int len = s.length();
		int mid = len / 2;
		int sum = 0;
		for(int i = 0; i < mid; i++ )
		{
			first_half[s[i] - 'a']++;
		}
		for(int i = mid; i < len; i++ )
		{
			second_half[s[i] - 'a']++;
		}
		
		for(int i = 0; i < 26; i++)
		{
		//	if(first_half[i] != second_half[i])
			sum += abs(first_half[i] - second_half[i]);
		}
		cout << sum / 2 << "\n";
	}
	return 0;
}