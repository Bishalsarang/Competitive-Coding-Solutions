//Author : Bishal Sarang
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin >> n;
	int coins[n];
	int total = 0;
	for(int i = 0; i < n;i++)
		{
			cin >> coins[i];
			total += coins[i];
		}
	total = total / 2;
	sort(coins, coins + n);
	reverse(coins, coins + n);
	int count = 0;
	int sum = 0;
	for(int i = 0; i < n; i++)
	{
		if(sum <= total )
		{
			sum += coins[i];
		count ++;
		}
		else
		break;
	}
	cout << count ;
	return 0;
}