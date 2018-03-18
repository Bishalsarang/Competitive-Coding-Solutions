//Author: Bishal Sarang
#include <bits/stdc++.h>
using namespace std;


int main() {
    long n;
    cin >> n;
    long command, x, elem;
    stack <long> st;
    stack <long> maxm;
   
    while(n--)
    {
        cin >> command;
        if( command == 1)
        {
            //Insert
            cin >> x;
            st.push(x);
            if(maxm.empty() || x >= maxm.top() )
                maxm.push(x);
          
            
        }
        else if(command == 2)
            //delete
        {
            elem = st.top();
            if(elem == maxm.top())
                maxm.pop();
            st.pop();
        }
        else
            //print
            cout << maxm.top() << "\n";
    }
    return 0;
}
