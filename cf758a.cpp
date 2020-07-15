#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, ma = 0;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++){
		cin >> arr[i];
		ma = max(ma, arr[i]);
	}
	int sum = 0;
	for(int i = 0; i < n; i++){
		sum += (ma - arr[i]);
	}
	cout << sum << "\n";
	return 0;
}
