//Author : Bishal Sarang
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	int array[10];
	while(T--)
	{
		for(int i = 0; i < 10; i++)
		{
			cin >> array[i];
		}
		sort(array, array + 10);
		cout << array[1] << "\n";
	}
	return 0;
}