//AUthor: Bishal Sarang
#include <bits/stdc++.h>
#define MAX 10000000
using namespace std;


vector<bool> all(MAX + 1, true);
vector<unsigned long long> primes;

bool hasEven(string s)
{
    string evens = "024685";
    for(auto c: s)
    {
        if(evens.find(c) != string::npos)
            return true;
    }
    return false;
}

void generatePrimes()
{
    all[0] = false, all[1] = false;
    
    for(int i = 2; i * i <= MAX; i++)
    {
        if(all[i])
        {
            for(int j = 2 * i; j <= MAX; j += i)
            {
                all[j] = false;
            }
        }
    }
    string s;
    for(int i = 10; i <= MAX; i++ )
    {
        if(all[i])
        {
            s = to_string(i);
            if(!hasEven(s))
                 primes.push_back(i);
        }
    }
    
}


int main() {
    generatePrimes();
    
    long n;
    cin >> n;
    string m;
  sort(primes.begin(), primes.end());
    unsigned long long sum  = 17 ;
    for(long long i = 0; primes[i] < n; i++)
    {
    
        m = to_string(primes[i]);
        bool flag = true;
        int len = m.length();
         for(int i = 0; i < len - 1; i++)
    {
        //rotate(s.begin(), s.begin() + 1, s.end());
      rotate(m.begin(), m.begin() + 1, m.end());
       
              if(!all[stol(m)])
                   {
                flag = false;
                    break;
                }
    }
               
            
            
    
        if(flag)
           // cout << primes[i] << " ";
            sum += primes[i];
    }
    cout << sum;
  
   
     
    return 0;
}