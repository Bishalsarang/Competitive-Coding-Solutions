//Author: Bishal Sarang
#include <bits/stdc++.h>
using namespace std;


int main() {
   int T;
    cin >> T;
    int num_of_cycles;
    int initial_height = 1;
    while(T--)
    {
        cin >> num_of_cycles;
        if(num_of_cycles == 0)
        {
            cout << 1 << "\n";
            continue;
        }
        int  height = initial_height;
       //  num_of_cycles++;
       for(int i = 1; i <= num_of_cycles; i++ )
       {
           if(i % 2 != 0)
                height = 2 * height;
            else
                height++;
          //  cout << height << " ";
        }
        cout << height << "\n";
        
    }
    return 0;
}
