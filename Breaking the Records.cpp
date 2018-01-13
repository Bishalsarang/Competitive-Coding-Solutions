#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int array[n];
	long maxm, minm;
	int count_high = 0, count_low = 0;
	for(int i = 0; i < n; i++)
	{
		cin >> array[i];
		if(i == 0)
		{
			maxm = array[0], minm = array[0];
		}

		if(array[i] > maxm)
			{
				count_high++;
				maxm = array[i];
				//cout << i << " ";
			}
		if(array[i] < minm)
		{
			count_low++;
			minm = array[i];
           // cout << i << " ";
		}
		
	}
	cout << count_high << " " << count_low;

		
	return 0;
}