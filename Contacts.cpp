//Author: Bishal Sarang
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    string command, name;
    map <string, int> contacts;
    for(int i = 0; i < n; i++)
    {
        cin >> command >> name;
        string s;
        if(command == "add")
        {
            int len = name.length();
            for(int j = 1; j <= len; j++)
            {
                s = name.substr(0, j);
                contacts[s]++;
            }
        } 
        else
        {
            cout << contacts[name] << "\n";
        }
   }
        
    return 0;
}