//Author: BIshal Sarang
#include <bits/stdc++.h>
using namespace std;

int main() {

	int N;
	cin >> N;
	int pair[101] = {0};
	int a;
	for(int i = 0; i < N; i++)
	{
		cin >> a;
		pair[a]++;
	}
	int count = 0, num = 0;
	for(int i = 0; i <= 100; i++)
		count += floor(pair[i] / 2);
	cout << count;
	return 0;
}