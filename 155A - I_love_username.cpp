//Author : Bishal Sarang
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int array[n];
	long maxm, minm;
	int count = 0;
	for(int i = 0; i < n; i++)
	{
		cin >> array[i];
		if(i == 0)
		{
			maxm = array[0], minm = array[0];
		}
	//	cout << array[i] << " ";
		if(array[i] > maxm)
			{
				count++;
				maxm = array[i];
			//	cout << i << " ";
			}
		if(array[i] < minm)
		{
			count++;
			minm = array[i];
		}
		
	}
	cout << count;

		
	return 0;
}