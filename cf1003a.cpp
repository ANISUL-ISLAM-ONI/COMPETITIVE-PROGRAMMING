#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++) cin >> arr[i];
	sort(arr, arr+n);
	int ma = 0, co = 1, pre = arr[0];
	for(int i = 1; i < n; i++){
		if(arr[i] == pre) co++;
		else{
			ma = max(ma, co);
			co = 1;
		}
		pre = arr[i];
	}
	ma = max(ma, co);
	cout << ma << "\n";
	return 0;
}
