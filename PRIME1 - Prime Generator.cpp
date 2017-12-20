//Author :Bishal Sarang
#include <bits/stdc++.h>
using namespace std;
void prime(int m, int n)
{
	for (int i= min(m, n); i<= max(m,n); i++) {
    		bool res = true;
    		if(i == 2)
    			{
    				cout << i << "\n";
    				continue;
    			}
    		if(i % 2 == 0)
    			res = false;
    		for (int j = 3; j * j <= i; j += 2)
        {
            if (i % j == 0) 
            {
              res = false;
			  break;
            }
          }
			if(res == true && i!= 1) cout << i << "\n";
    }  
   }
   
int main()
{
	long n, a, b;
	cin >> n;
	for(int i = 1 ;i <= n; i++)
	{
		cin >> a >> b;
		prime(a, b);
		cout << "\n";
	}
	return 0;	
} 