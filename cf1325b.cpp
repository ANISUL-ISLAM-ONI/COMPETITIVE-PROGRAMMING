#include <bits/stdc++.h>

using namespace std;

int main(){
	int T;
	cin >> T;
	while(T--){
		int n;
		cin >> n;
		int arr[n];
		for(int i = 0; i < n; i++) cin >> arr[i];
		sort(arr, arr+n);
		int res = 1, pre = arr[0];
		for(int i = 1; i < n; i++){
			if(arr[i] > pre) res++;
			pre = arr[i];
		}
		cout << res << "\n";
	}
	return 0;
}
