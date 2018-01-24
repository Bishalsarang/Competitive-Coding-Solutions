//Author: Bishal Sarang
#include <bits/stdc++.h>

using namespace std;


int main() {
    int T;
    cin >> T;
    while(T--)
    {
        int N;
        cin >> N;
        char grid[N + 1][N + 1];
        vector <string> vect(N);
        for(int i = 0; i < N; i++)
        {
            cin >> vect[i];
            sort(vect[i].begin(), vect[i].end());
        }
      //  for(auto x: vect)
        //    cout << x << " ";
        bool flag = true;
        for(int i = 1; i < N; i++)
        {
            for(int j = 0; j < N; j++)
            {
                if(vect[i - 1][j] > vect[i][j])
                {
                    cout << "NO\n";
                    flag = false;
                    break;
                }
            }
            if(!flag)
                break;
        }
        if(flag)
            cout << "YES\n";
        
        
    }
    return 0;
}
