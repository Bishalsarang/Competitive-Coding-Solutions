//903A - Hungry Student Problem
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	//int a;
	while(T--)
	{
		int a;	
		cin >> a;
		bool valid = false;
		for(int i = 0; i <=100; i++)
		{
			for(int j = 0; j <=100; j++)
			{
				if( 3 * i + 7 * j == a)
				 {
				 	valid = true;
				 	break;
				 }
				
			}
			if(valid == true)
				break;
				
		}
		if(valid == true)
			cout << "YES \n";
			else
			cout << "NO \n";
		}
	return 0;
}