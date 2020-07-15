#include<bits/stdc++.h>

using namespace std;

int main(){
	int T;
	cin >> T;
	for(int i = 1; i <= T; i++){
		int n;
		cin >> n;
		int arr[n];
		for(int j = 0; j < n; j++) cin >> arr[j];
		cout << "Case " << i << ": " << arr[n/2] << "\n";
	}
	return 0;
}
