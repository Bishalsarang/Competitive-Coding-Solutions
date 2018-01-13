#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	string s = "hackerrank";
	while(T--)
	{
		string a;
		cin >> a;
		int len = a.length();
		int count = 0;
		if(len < 10)
			cout << "NO" << "\n";
		else
		{
			int j = 0;
		for(int i = 0; i < 10;i++)
		{
			
			for( ;j < len; j++)
			{
				if (a[j] == s[i])
					{
						j = j + 1;
						count++;
						break;
					}
			}
		}
		}
		if(count == 10)
			cout << "YES" << "\n";
		else 
		cout << "NO" << "\n";
	}
	return 0;
}