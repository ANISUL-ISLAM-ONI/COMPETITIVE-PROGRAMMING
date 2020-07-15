#include <bits/stdc++.h>

using namespace std;

int main(){
	int T;
	cin >> T;
	while(T--){
		long long arr[3];
		cin >> arr[0] >> arr[1] >> arr[2];
		sort(arr, arr+3);
		arr[2] -= (arr[1] - arr[0]);
		arr[1] += (arr[2] / 2);
		cout << arr[1] << "\n";
	}
	return 0;
}
