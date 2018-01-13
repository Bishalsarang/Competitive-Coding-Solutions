#include <bits/stdc++.h>
using namespace std;

int main() {
	
	long long N;
	cin >> N;
	int array[N];
	for(int i = 0; i < N; i++)
			cin >> array[i];
	sort(array, array + N);
	int mid = (N / 2);
	cout << array[mid];
	return 0;
}