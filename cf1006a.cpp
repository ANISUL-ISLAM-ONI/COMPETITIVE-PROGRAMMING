#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	n--;
	for(int i = 0; i < n; i++){
		int a;
		cin >> a;
		if(a % 2 == 0) cout << a - 1 << " ";
		else cout << a << " ";
	}
	cin >> n;
	if(n % 2 == 0) cout << n - 1 << "\n";
	else cout << n << "\n";
	return 0;
}
