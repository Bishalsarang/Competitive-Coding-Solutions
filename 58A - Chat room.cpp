//Author : Bishal Sarang
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	string s;
	cin >> s;
	string t = "hello";
	int n = s.length();
	int count = 0;
	if(n < t.length())
		{
			cout << "NO";
			return 0;
		}
	else
	{
		int i = 0;
			for(int j = 0 ; j < 5; j++)
		{
				for(; i < n; i++)
	{
		if(t[j] == s[i])
			{
			count++;
			i++;
			break;
			}
	
	}
	}	
	}
		
if(count == 5)
	cout << "YES";
else
	cout << "NO";
	return 0;
}
