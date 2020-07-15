#include <bits/stdc++.h>

using namespace std;

long long fact(long long n){
	long long res = 1;
	for(long long i = 2; i <= n; i++) res *= i;
	return res;
}

int main(){
	long long a, b;
	cin >> a >> b;
	a = min(a, b);
	cout << fact(a) << "\n";
	return 0;
}
