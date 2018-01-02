//Author : Bishal Sarang
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin >> n;
	string games;
	cin >> games;
	int anton = 0, danik = 0;
	for(int i = 0; i < n; i++)
	{
		if(games[i] == 'A')
			anton++;
		else
			danik++;
	}
	if(anton > danik)
		cout << "Anton"; 
	else if( danik > anton)
		cout << "Danik";
	else
		cout << "Friendship";
		
	return 0;
}