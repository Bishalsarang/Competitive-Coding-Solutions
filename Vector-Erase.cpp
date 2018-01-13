#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N;
    cin >> N;
    vector <int> vect(N);
    int num;
    for(int i = 0; i < N; i++)
    {
        cin >> num;
        vect[i] = num;
    }
    int pos,low, up;
    cin >> pos >> low >> up;
   vect.erase(vect.begin() +(pos - 1));
  //  vect.resize(vect.size() - 1);
    vect.erase(vect.begin() + low - 1, vect.begin() + up - 1);
   cout << vect.size() << "\n";
    for(auto elem: vect)
        cout << elem << " ";
    
    return 0;
}
