//Author : Bishal Sarang
#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	long long n;
	cin >> n;
	int player_1, player_2;
	int maxm_1 = -9999, maxm_2 = -9999;
	int temp_1 = 0,  temp_2 = 0;
	while(n--)
	{
		cin >> player_1 >> player_2;
		temp_1 += player_1, 	temp_2 += player_2;
		if(temp_1> temp_2)
			maxm_1 = max((temp_1 - temp_2),maxm_1);
		else
			maxm_2 = max((temp_2 - temp_1),maxm_2);
	}
 
	if(maxm_1 > maxm_2)
		cout << 1 << " " << maxm_1;
	else
		cout << 2 << " " << maxm_2;
	return 0;
}
