#include<bits/stdc++.h>

using namespace std;

int main(){
	int T;
	cin >> T;
	for(int i = 0; i < T; i++){
		int L, c = 0;
		cin >> L;
		int arr[L + 1];
		arr[0] = 0;
		for(int j = 1; j <= L; j++){
			cin >> arr[j];
			for(int k = j - 1; k >= 0; k--){
				if(arr[j] < arr[k]){
					c++;
				}
			}
		}
		cout << "Optimal train swapping takes " << c << " swaps.\n";
	}
	return 0;
}
