//Author : Bishal Sarang
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int N;
	cin >> N;
	int arr[1000] = {0};
    vector <int> V;
	int val;
	int j = 0;
	for(int i = 0; i < N; i++)
	{
		val = 0;
		cin >> val;
		V.push_back(val);
		arr[val]++;
    }
	cout << N << "\n";
    int maxim = *max_element(V.begin(), V.end());
    for(int i = 1; i <= maxim; i++)
	{
		if(arr[i])
			{
				N -= arr[i];
				if(N != 0) cout << N <<" \n";
			}
	}
	return 0;
}