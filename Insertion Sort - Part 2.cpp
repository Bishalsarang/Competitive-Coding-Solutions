//Author: Bishal Sarang
#include <bits/stdc++.h>

using namespace std;

void insertionSort2(int n, vector <int> arr) {
    int value, index;
   for(int i = 1; i < n ; i++)
   {
       value = arr[i];
       index = i;
       while(index > 0 && arr[index - 1] > value)
       {
            swap(arr[index - 1], arr[index]);
          
           index--;
       }
        for(auto values: arr)
               cout << values << " "; 
       cout << "\n";

   }
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i];
    }
    insertionSort2(n, arr);
    return 0;
}
