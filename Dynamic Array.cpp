//Author: Bishal Sarang
#include <bits/stdc++.h>
using namespace std;


int main() {
    int n, q;
    cin >> n >> q;
    int query_num, x, y;
    vector <int> seqList[n];
    int lastAnswer = 0, seq;
    while(q--)
    {
        cin >> query_num >>  x >> y;
        if(query_num == 1)
            seqList[(x ^ lastAnswer) % n].push_back(y);
        else
        { seq = (x ^ lastAnswer) % n;
            lastAnswer = seqList[seq][y % seqList[seq].size()];
            cout << lastAnswer << "\n";
        }
    }
 
    
     
    return 0;
}
