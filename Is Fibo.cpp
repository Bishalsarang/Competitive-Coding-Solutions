//Author : Bishal Sarang
#include <bits/stdc++.h>
#define MAX 10000000
using namespace std;

unsigned long long fib[MAX];
int main(){
    fib[0] = 0, fib[1] = 1;
    map <unsigned long long , bool> ho;
    ho[0] = true, ho[1] = true;
    for(int i = 2; i <= MAX; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
        ho[fib[i]] = true;
        if(fib[i] > 10000000000)
            break;
    }
    unsigned long long  t, n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        if(ho[n])
            cout << "IsFibo\n";
        else
            cout << "IsNotFibo\n";
    }
    
   
    return 0;
}