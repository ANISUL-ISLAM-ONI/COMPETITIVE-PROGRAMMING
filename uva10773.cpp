#include<bits/stdc++.h>

using namespace std;

int main(){
	int T;
	cin >> T;
	for(int i = 1; i <= T; i++){
		double d, v, u, res;
		cin >> d >> v >> u;
		res = (d / sqrt(((u * u) - (v * v)))) - (d / u);
		if(v >= u || res <= 0) cout << "Case " << i << ": can't determine\n";
		else printf("Case %d: %.3lf\n", i, res);
	}
	return 0;
}
