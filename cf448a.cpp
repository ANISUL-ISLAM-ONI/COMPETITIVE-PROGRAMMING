#include <bits/stdc++.h>

using namespace std;

int main(){
	int a, b, c, d, e, f, g;
	cin >> a >> b >> c >> d >> e >> f >> g;
	int totalCup = a + b + c;
	int totalMed = d + e + f;
	if(totalCup % 5 == 0) totalCup /= 5;
	else totalCup = (totalCup / 5) + 1;
	if(totalMed % 10 == 0) totalMed /= 10;
	else totalMed = (totalMed / 10) + 1;
	if(totalCup + totalMed <= g) cout << "YES\n";
	else cout << "NO\n";
	return 0;
}
