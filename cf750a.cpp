#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, k, res = 0;
	cin >> n >> k;
	for(int i = 1; i <= n; i++){
		k += (i * 5);
		if(k <= 240) res++;
		else break;
	}
	cout << res << "\n";
	return 0;
}
