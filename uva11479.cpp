#include<bits/stdc++.h>

using namespace std;

int main(){
	int T;
	cin >> T;
	for(int i = 1; i <= T; i++){
		long long arr[3];
		for(int j = 0; j < 3; j++) cin >> arr[j];
		sort(arr, arr + 3);
		if(arr[0] + arr[1] > arr[2]){
			if(arr[0] == arr[1] && arr[1] == arr[2]) cout << "Case " << i << ": " << "Equilateral\n";
			else if(arr[0] == arr[1] || arr[1] == arr[2]) cout << "Case " << i << ": " << "Isosceles\n";
			else cout << "Case " << i << ": " << "Scalene\n";
		}
		else cout << "Case " << i << ": " << "Invalid\n";
	}
	return 0;
}
