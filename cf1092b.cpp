#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, res = 0;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++) cin >> arr[i];
	sort(arr, arr + n);
	for(int i = 0; i < n; i += 2){
		if(arr[i] != arr[i + 1]){
			res += (arr[i + 1] - arr[i]);
		}
	}
	cout << res << "\n";
	return 0;
}
