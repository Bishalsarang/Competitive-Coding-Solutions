//Author: Bishal Sarang
#include <bits/stdc++.h>
using namespace std;

int count(string a)
{
	string check = "aeiou13579";
	int count = 0;
	for(auto x : a)
		if(check.find(x) != std::string::npos)
			count++;
	return count;
}

int main() {
	// your code goes here
	string s;
	cin >>s ;
	cout << count(s);
	return 0;
}