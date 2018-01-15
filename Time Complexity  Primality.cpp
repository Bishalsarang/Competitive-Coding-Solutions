#include <bits/stdc++.h>

using namespace std;
bool isPrime(long a)
{
    if(a == 1)
        return false;
     if(a == 2 || a == 3)
        return true;
    if(a % 2 == 0)
        return false;
   
    for(int i = 3 ; i * i <= a; i += 2)
    {
        if( a % i == 0)
               return false;
}
    return true;
}

int main(){
    int n;
    cin >> n;
    long a;
    while(n--)
    {
        cin >> a;
        if(isPrime(a))
            cout << "Prime";
        else
            cout << "Not prime";
        cout << "\n";
    }
    return 0;
}