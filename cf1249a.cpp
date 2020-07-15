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
		bool ch = true;
		n--;
		for(int i = 0; i < n; i++){
			if(arr[i + 1] - arr[i] == 1){
				ch = false;
				break;
			}
		}
		if(ch) cout << "1\n";
		else cout << "2\n";
	}
	return 0;
}
