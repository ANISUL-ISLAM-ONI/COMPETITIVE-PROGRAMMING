#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, sum = 0;
	cin >> n;
	for(int i = 0; i < n; i++){
		int a;
		cin >> a;
		sum += a;
	}
	long double res = (long double) sum /(long double) n;
	printf("%.12Lf\n", res);
	return 0;
}
