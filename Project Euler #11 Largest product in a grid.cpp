//Author: Bishal Sarang
#include <bits/stdc++.h>
#define MAX 21
using namespace std;

bool is_valid(int r, int c)
{
	if(r >= 0 && r < 20 && c >= 0 && c < 20)
		return true;
	return false;
}
int main() {
	// your code goes here
int grid[20][20], row, col;
int drow[] = {-1, -1, 0, 1};
int dcol[] = {1, 0, 1, 1};

 long product, maxm = 0;
  for (int i = 0; i < 20; i++)
    for (int j = 0; j < 20; j++)
      cin >> grid[i][j];

  for (int i = 0; i < 20; i++)
    for (int j = 0; j < 20; j++)
      for (int d = 0; d < 4; d++) {
        product = 1;
        for (int num = 0; num < 4; num++) {
          row = i + drow[d] * num;
          col = j + dcol[d] * num;
          if (is_valid(row, col))
            product *= grid[row][col];
          else
            product = 0;
        }
        maxm = max(maxm, product);
      }
  cout << maxm;

  return 0;
} 