#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, c, pre, co = 1;
	cin >> n >> c >> pre;
	for(int i = 1; i < n; i++){
		int a;
		cin >> a;
		if(a - pre <= c) co++;
		else co = 1;
		pre = a;
	}
	cout << co << "\n";
	return 0;
}
