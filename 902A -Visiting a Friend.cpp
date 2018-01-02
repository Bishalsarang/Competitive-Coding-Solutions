//Author : Bishal Sarang
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int num, friend_loc;
	int loc, limit, maxm = -1;
//	set <int> points;
	cin >> num >> friend_loc;
	int original = num;
	int array[103][103] = {0};
	while(num--)
	{
		cin >> loc >> limit;
		
		if((loc == 0 && limit == 0 && original == 1 && friend_loc == 1))
			{
				cout << "NO";
				return 0;
			}
		
		for(int i = loc; i <= limit; i++)
			for(int j = loc; j <= limit; j++)
				array[i][j] = 1;
	}
	

	for(int i = 1; i <= friend_loc; i++)
	{
		if(array[i - 1][i] != 1)
		{
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";
	return 0;
}