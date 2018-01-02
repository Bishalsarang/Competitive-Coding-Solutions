//Author : Bishal Sarang
#include <bits/stdc++.h>
using namespace std;

bool sortbysec(const pair<long,long> &a, const pair<long long ,long long> &b)
{
       return a.second > b.second;
}
int main() {
	// your code goes here
	long long n;
	cin >> n;
 	vector< pair <long long , long long> > vect;
	
	long long org = n;
	long long i = 0;
	long long a, b;
	while(n--)
	{
		cin >> a >> b;
		vect.push_back(make_pair(a, b));
	}
	stable_sort(vect.begin(), vect.end(), sortbysec);
	for(auto i = vect.begin(); i != vect.end(); i++)
	{
		cout << i -> first << " " << i -> second << "\n";
	}
	return 0;
}