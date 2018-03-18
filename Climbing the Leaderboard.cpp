//Author: Bishal Sarang
#include <bits/stdc++.h>

using namespace std;



int main() {
    int n, m;
    cin >> n;
    vector <long> already(n);
    set <int> leaderboard;
    for(int i = 0; i < n; i++)
    {
        cin >> already[i];
        leaderboard.insert(already[i]);   
    }
    cin >> m;
    vector <int> alice(m);
     vector<int> naya(leaderboard.begin(), leaderboard.end());
    for(int i = 0; i < m; i++)
    {
        cin >> alice[i];
        //leaderboard.insert(alice[i]);
        int rank = leaderboard.size();
        for(auto elem: leaderboard)
        {
            if(elem > alice[i])
            {
              cout << rank + 1;
                break;
            }
            if(elem == alice[i])
            {
              cout << rank;
                break;
            }
            rank--;
            leaderboard.erase(elem);
        }
       
        if(!rank)
            cout << 1;
        cout << endl;
       
    }

    return 0;
}