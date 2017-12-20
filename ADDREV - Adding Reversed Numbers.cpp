//Author : Bishal Sarang
#include <bits/stdc++.h>
using namespace std;
 
 int reverse(int a)
 {
	int quo = a;
	int	rev = 0;
	int rem;
		while(quo)
		{
			rem = quo % 10;
			quo = quo  / 10;
			rev  = rev  * 10 + rem;
		}
	return rev;
 }
int main() {
	// your code goes here
	int n;
	cin >> n;
	int a, b;
	int rev_a, rev_b,rev_add, add;
	for(int i = 0; i < n ; i++)
	{
		cin >> a >> b;
		rev_a = reverse(a);
		rev_b = reverse(b);
		add = rev_a + rev_b;
		cout << reverse(add) << "\n";
	}
	return 0;
}  