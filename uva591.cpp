#include<bits/stdc++.h>

using namespace std;

int main(){
	int n, set = 1;
	while(cin >> n){
		if(n == 0) break;
		int arr[n], count = 0;
		for(int i = 0; i < n; i++)  cin >> arr[i];
		int sum = 0;
		for(int i = 0; i < n; i++)  sum += arr[i];
		sum /= n;
		for(int i = 0; i < n; i++){
			if(arr[i] > sum) count += arr[i] - sum;
		}
		cout << "Set #" << set << "\n";
		cout << "The minimum number of moves is " << count << ".\n\n";
		set++;
	}
	return 0;
}
