#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, l = 0, r = 0;
	cin >> n;
	while(n--){
		char a;
		cin >> a;
		if(a == 'L') l++;
		else r++;
	}
	cout << l + r + 1 << "\n";
	return 0;
}
