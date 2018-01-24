//Author : Bishal Sarang
#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n;
	cin >> n;
	string s = to_string(n);
	//cout << s;
	int len = s.length();
	if(n > 0)
		{
			cout << n;
			return 0;
		}
	else
		{
			
			if((s[len - 1] - '0') > (s[len - 2] - '0'))
				s.erase(s.begin() + (len - 1));
			else
				s.erase(s.begin() + (len - 2));
			
			
			
		}
	s == "-0" ? cout << 0 : cout << s;
            return 0;
}