#include <bits/stdc++.h>
#define maxm 73939135
using namespace std;

bool is_prime(string s)
{
    long num = stol(s);
    if(num <=1)
        return false;
    if(num == 2 || num == 3)
        return true;
    if(num % 2 == 0)
        return false;
    for(int i =3; i * i <= num; i += 2)
        if(num % i == 0)
            return false;
    return true;
}

int main() {
    
     	 vector <string> pans = {"12", "123","1234","12345","123456", "1234567","12345678", "123456789"} ;
    set <string> uniques;
    for(auto x: pans)
    do {
      int len = x.length() - 1;
	uniques.insert(x);
    }while(next_permutation(x.begin(), x.end()));
    
  vector <long> panprimes;
    for(auto x: uniques)
    {
        if(is_prime(x))
        {
            long n = stol(x);
            panprimes.push_back(n);
        }
    }
   sort(panprimes.begin(), panprimes.end());
   int T;
    cin >> T;
    long n;
    while(T--)
    {
        cin >> n;
       
        int i=panprimes.size()-1;
        for(;i>=0;i--){
            if(panprimes[i]<=n)
                break;
        }
        if(i>=0)
            cout << panprimes[i] << endl;
        else
            cout << -1 << endl;
    }
    
    return 0;
}
