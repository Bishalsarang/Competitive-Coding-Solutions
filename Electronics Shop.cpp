//Author: Bishal Sarang
#include <bits/stdc++.h>
using namespace std;


int main() {
   int money_own, key_brands,usb_brands;
    cin >> money_own >> key_brands >>usb_brands;
    int  key_price[key_brands], usb_price[usb_brands];
    for(int i = 0; i < key_brands; i++)
        cin >> key_price[i];
    for(int i = 0; i < usb_brands; i++)
        cin >> usb_price[i];
   int maxm = -99999;
    for(int i = 0; i < key_brands; i++)
        for(int j = 0; j < usb_brands; j++)
            if(key_price[i] + usb_price[j] <= money_own)
                maxm = max(key_price[i] + usb_price[j], maxm);
   maxm != -99999 ? cout << maxm : cout << -1;
    return 0;
}
