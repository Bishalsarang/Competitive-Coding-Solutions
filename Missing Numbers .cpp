#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int m, n;
	//list_1[m], list_2[n];
	cin >> m;
	int first_frequency[10009] = { 0 }, second_frequency[10009] = {0};
	int num, maxm_1 = 0, minm_1 = 99999, maxm_2 = 0, minm_2 = 99999;
	for(int i = 0; i < m ; i++)
	{
		
		cin >> num;
		if(num > maxm_1 )
			maxm_1 = num ;
		if(num < minm_1 )
			minm_1 = num ;
		first_frequency[num]++;
	}
	cin >> n;
	for(int i = 0; i < n ; i++)
	{
		
		cin >> num;
		if(num > maxm_2 )
			maxm_2 = num ;
		if(num < minm_2 )
			minm_2 = num ;
		second_frequency[num]++;
	}

	int real_max = max(maxm_1, maxm_2);
	//cout << real_max;
	int real_min = min(minm_1, minm_2);
	//cout << "\n " << real_min;
	int count = 0;
	for(int i = real_min; i <= real_max; i++)
	{
		if (abs(first_frequency[i] - second_frequency[i]) != 0)
			cout << i << " ";
	}
//	cout << count;
	return 0;
}