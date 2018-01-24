//Author: Bishal Sarang
#include <bits/stdc++.h>
using namespace std;

int main() {
	long n;
	cin >> n;
	vector <long> vect(n);
	for(int i = 0; i < n; i++)
        cin >> vect[i];
    sort(vect.begin(), vect.end());
    for(int i = 0; i < n - 2; i++)
        if(vect[i] + vect[i + 1] > vect[i + 2])
    {
        
        cout << "YES";
        return 0;
    }
    cout << "NO";
	return 0;
}