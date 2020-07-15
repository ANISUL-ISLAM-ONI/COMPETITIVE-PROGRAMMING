#include <bits/stdc++.h>

using namespace std;

int main(){
	long long n, sum;
	cin >> n;
	if(n % 2 == 0){
		sum = (n * (2 + n)) / 4;
		sum -= (n * (1 + (n - 1))) / 4;
	}
	else{
		n--;
		sum = (n * (2 + n)) / 4;
        sum -= (n * (1 + (n - 1))) / 4;
		sum -= (n + 1);
	}
	cout << sum << "\n";
	return 0;
}
