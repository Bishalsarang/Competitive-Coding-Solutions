//Author: Bishal Sarang
#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    int cloud[n];
    for(int i = 0; i < n; i++)
        cin >> cloud[i];
    int count = 0;
     for(int i = 0; i < n -1; i++)
     {
         
          if(cloud[i] == 0 && cloud[i + 2] == 0)
       {
             // cout << cloud[i]  << " to " << cloud[i + 2] << "\n";
            // cout << i << " to " << i + 2 << " \n";
           count++;
           i++;
           continue;
       }
         if(cloud[i] == 0 &&  cloud[i + 1] == 0)
         {
          //   cout << i << " to " << i + 1 << " \n";
             count++;
         } 
         
     }
  cout << count ;

    return 0;
}
