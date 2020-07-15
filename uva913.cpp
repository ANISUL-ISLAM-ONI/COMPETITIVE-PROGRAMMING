#include<bits/stdc++.h>

using namespace std;

int main(){
	long long N;
	while(cin >> N){
		long long n;
		n = ((N-1)/2) + 1;
		n = n * n;
		n--;
		n = ((2 * n) + 1);
		n += ((n - 2) + (n - 4));
		cout << n << "\n";
	}
	return 0;
}
