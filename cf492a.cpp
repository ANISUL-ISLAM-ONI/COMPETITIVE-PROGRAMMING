#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, sum = 0, i = 0;
	cin >> n;
	while(sum + i <= n){
		sum += i;
		n -= sum;
		i++;
	}
	cout << i - 1 << "\n";
	return 0;
}
