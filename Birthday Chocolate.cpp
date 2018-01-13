#include <bits/stdc++.h>

using namespace std;


int main() {
    int n; 
    cin >> n;
    int array[n];
    int day, month;
    for(int i = 0; i < n; i++)
        cin >> array[i];
    cin >> day >> month;
        int count = 0, sum = 0; 
    for(int i = 0; i < n; i++)
        {
            sum =0;
            for(int j = i, k = 1; k <= month ; j++, k++ )
            sum += array[j];
            if(sum == day)
              count++;
     
        }
        cout << count;
    
    return 0;
}
