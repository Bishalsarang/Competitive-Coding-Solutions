//Author: Bishal Sarang
#include <bits/stdc++.h>

using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    vector <string> vect(n);
    for(int i = 0; i < n; i++)
       cin >> vect[i] ; 
    int maxm = 0, sum = 0, count = 0;
    for(int i = 0; i < n; i++)
        for(int j = i + 1; j < n; j++)
        {
            sum = 0;
            for(int k = 0; k < m; k++)
                sum += (vect[i][k] - '0' ) | (vect[j][k] - '0' );
            if(sum > maxm )
            {
                maxm = sum;
                count = 0;
            }
            if(sum == maxm)
                count++;
        }
   
    cout << maxm << " \n" << count;


    return 0;
}