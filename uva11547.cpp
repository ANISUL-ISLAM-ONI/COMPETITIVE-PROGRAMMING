#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	for(int i = 0; i < t; i++){
		int a;
		cin >> a;
		a = (315 * a) + 36962;
		a /= 10;
		cout << abs(a % 10) << "\n";
	}
	return 0;
}
