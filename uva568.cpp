#include<bits/stdc++.h>

using namespace std;

int main(){
	int arr[10001];
	int sum = 1;
	for(int i = 1; i <= 10000; i++){
		sum = sum * i;
		while(sum % 10 == 0) sum /= 10;
		sum = sum % 100000;
		arr[i] = sum % 10;
	}
	int n;
	while(cin >> n) cout << setw(5) << n << " -> " << arr[n] << "\n";
	return 0;
}
