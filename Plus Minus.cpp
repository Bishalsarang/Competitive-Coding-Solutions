//Author : Bishal Sarang
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int num, pos = 0, neg = 0, zero = 0;
    for(int i = 0; i < n; i++)
    {  
        cin >> num;
        if(!num)
            zero++;
        else if(num < 0)
            neg++;
        else
            pos++;
        
    }
  
    printf("%.6f\n%.6f\n%.6f",((float)pos /n), ((float)neg / n), ((float)zero / n));
    return 0;
}
