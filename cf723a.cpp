#include <bits/stdc++.h>

using namespace std;

int main(){
	int arr[3];
	for(int i = 0; i < 3; i++) cin >> arr[i];
	sort(arr, arr+3);
	int sum = 0;
	sum += (arr[1] - arr[0]);
	sum += (arr[2] - arr[1]);
	cout << sum << "\n";
	return 0;
}
