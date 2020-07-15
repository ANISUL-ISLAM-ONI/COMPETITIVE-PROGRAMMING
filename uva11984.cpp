#include<bits/stdc++.h>

using namespace std;

int main(){
	int T;
	cin >> T;
	for(int i = 1; i <= T; i++){
		int C,F;
		cin >> C >> F;
		double f = (1.8 * (double) C) + 32.0 + (double) F;
		double c = (5.0 * (f - 32.0))/9.0;
		printf("Case %d: %.2lf\n",i,c);
	}
	return 0;
}
