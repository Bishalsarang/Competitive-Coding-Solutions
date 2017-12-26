#include <bits/stdc++.h>
using namespace std;

int main()
{
	
	int v_health, v_pow, v_potion;
	int mod_health, mod_pow;
	//string array[9999999] = {};
	cin >>  v_health >> v_pow >> v_potion >> mod_health >> mod_pow; 
	vector <string> vect;
	int count = 0, i = 0;
	while(mod_health > 0)
	{
		
		if (mod_health - v_pow <= 0 || v_health - mod_pow > 0) {
			vect.push_back("STRIKE");
			mod_health -= v_pow;
		} else {
			v_health += v_potion;
			vect.push_back("HEAL");
		}
		v_health -= mod_pow;
		
		count++;
	}
	cout << count << "\n";
	for(auto x : vect)
	{
		cout << x << "\n";
	}
	return 0;
}