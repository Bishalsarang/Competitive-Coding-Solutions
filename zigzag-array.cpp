//Author : Bishal Sarang
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	int org = T;
	int a[T], i= 0;
	int count  =0 ;
	while(T--)
	{
		cin >> a[i];
		i++;
	}
	for(int i =1; i< org - 1; i++)
	{
		if((a[i - 1] < a[i] && a[i] < a[i+1]) || (a[i - 1] > a[i] && a[i] > a[i+1]) )
			count++;;
	}
	cout << count;
	return 0;
}