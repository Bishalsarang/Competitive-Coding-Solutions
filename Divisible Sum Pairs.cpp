//Author : Bishal Sarang
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n, k;
	cin >> n >> k;
	int count = 0, count_1 = 0;
	int a[n];
	for(int i = 0; i < n; i++)
		cin >> a[i];
	for(int i = 0; i < n; i++)
	{
		for(int j = i + 1; j < n; j++)
		{
			if((a[i] + a[j]) % k == 0)
				{
				//	cout << "Checking" << " (" << i << "," <<j << ")";
					count++;
				}
		}
	}
	cout << count;
	return 0;
}