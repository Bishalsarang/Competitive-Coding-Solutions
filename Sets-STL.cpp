#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int T;
    cin >> T;
    int query, value;
    set <int> st;
    while(T--)
    {
        cin >> query >> value;
        if(query == 1)
            st.insert(value);
           else if(query == 2)
               st.erase(value);
              else
              {
                  if(st.find(value) != st.end())
                      cout << "Yes" << "\n";
                  else
                      cout << "No \n";
              }
                  
    }
    return 0;
}