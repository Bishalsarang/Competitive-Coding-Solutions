//Author : Bishal Sarang
 #include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int N;
	cin >> N;

	string s = "I hate it";
	for(int i =0; i < N; i++)
	{
		if(i == 0)
			s = "I hate it";
		else if( i % 2 != 0)
		
			s = regex_replace(s, regex("it"), "that I love it");
	
		else
		s = regex_replace(s, regex("it"), "that I hate it");
	}
	cout << s;
	return 0;
}