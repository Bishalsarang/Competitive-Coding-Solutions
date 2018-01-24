//Author : Bishal Sarang
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector <int> vect(7);
	for(int i = 0; i < 7; i++)
			cin >> vect[i];
	int i = 0, rem = 0, num = 0;
	
	while(num < n)
	{
		rem = (i++) % 7; 
		num += vect[rem];
	}
	cout << rem + 1;
            return 0;
}