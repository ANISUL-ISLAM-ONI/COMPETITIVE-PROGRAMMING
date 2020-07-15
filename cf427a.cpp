#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, pol = 0, res = 0;
	cin >> n;
	for(int i = 0; i < n; i++){
		int a;
		cin >> a;
		if(a == -1 && pol == 0) res++;
		else pol += a;
	}
	cout << res << "\n";
	return 0;
}
