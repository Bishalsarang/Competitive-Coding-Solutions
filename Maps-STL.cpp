#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin >> t;
    map<string, int> data;
    int query;
    string student;
    int marks;
    while(t--)
    {
        cin >> query;
        if(query == 1)
        {
            cin >> student >> marks;
            data[student] =data[student] + (marks);
            
    }
        else if(query == 2)
        {
            cin >> student;
            data.erase(student);
        }
        else
        {
            cin >> student;
            cout << data[student] << "\n";
        }
    }
    return 0;
}
