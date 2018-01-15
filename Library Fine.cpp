//Author: Bishal Sarang
#include <bits/stdc++.h>
using namespace std;


int main() {
  int day_returned, month_returned, year_returned;
  int due_day, due_month, due_year;

  cin >> day_returned >> month_returned >> year_returned;
  cin >> due_day >> due_month >> due_year;

  long fine = 0;
  if (year_returned > due_year)
    fine = 10000;
  else if (year_returned < due_year)
    fine = 0;
  else if (year_returned == due_year)
  {
        if (month_returned > due_month)
            fine = 500 * (month_returned - due_month);
         else if (month_returned < due_month)
            fine = 0;
         else if (month_returned == due_month)
         {
            if (day_returned > due_day)
                fine = 15 * (day_returned - due_day);
             else if (day_returned <= due_day)
                fine = 0;
          }
    }
    cout << fine;
  return 0;
}
