//Author : Bishal Sarang
#include<bits/stdc++.h>
using namespace std;

long long remove_zero(string num)
{
	for(int i = 0; i < num.size(); i++)
		if(num[i] == '0')
			{
				num.erase(num.begin()  + i);
				i--;
			}
	return stoi(num);
}
int main() {
	// your code goes here
	long long a, b;
	cin >> a >> b;
	
	long long sum = a + b;
	string num_1  = to_string(a);
	string num_2  = to_string(b);
	string sum_str = to_string(sum);
	
	long long temp_1 = remove_zero(num_1);
	long long temp_2= remove_zero(num_2);
	long long temp_3 = remove_zero(sum_str);

	if(temp_3 == temp_1 + temp_2 )
		cout << "YES";
	else 
		cout << "NO";
	return 0;
}