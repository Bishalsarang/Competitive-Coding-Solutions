//AUthor : Bishal Sarang
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int array[n];
    for(int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    int swapped = 0;

for(int i = n - 1; i > 0; i--)
    {
        for(int j = 0 ; j <= i - 1; j++ )
            if(array[j] > array[j + 1])
            {
                swapped++;
                swap(array[j], array[j + 1]);
            }
    }
    cout << "Array is sorted in " << swapped << " swaps." << "\n";
    cout <<  "First Element: " << array[0] << "\n";
    cout << "Last Element: " << array[n - 1] << "\n";
    return 0;
}
