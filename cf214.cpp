#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, m, co = 0;
	cin >> n >> m;
	//int ma = max(m, n);
	int ma = sqrt(n);
	for(int a = 0; a <= ma; a++){
		int b = n - (a * a);
		int res = a + (b * b);
		if(res == m) co++;
	}
	cout << co << "\n";
	return 0;
}
