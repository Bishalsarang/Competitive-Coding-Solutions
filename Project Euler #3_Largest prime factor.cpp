//Author: Bishal Sarang
#include <bits/stdc++.h>
using namespace std;

int main() {
	
    int T;
    cin >> T;
    while(T--)
    {
	unsigned long long N, S;
	cin >> N;
	
     unsigned long long factor = 1;
	for(unsigned long long i = 2; i * i <= N; i++)
	{
		while( N % i == 0)
        {
            factor = i;
            N  /= i;
        }
     }
       if(N > 1) 
           factor = N;
       cout << factor << "\n";
    }
    return 0;
}