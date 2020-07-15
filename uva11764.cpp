#include<bits/stdc++.h>

using namespace std;

int main(){
	int T;
	cin >> T;
	for(int i = 1; i <= T; i++){
		int n;
		cin >> n;
		if(n == 1){
			int a;
			cin >> a;
			cout << "Case " << i << ": 0 0\n";
		}
		else{
			int arr[n];
			for(int j = 0; j < n; j++){
				cin >> arr[j];
			}
			int h = 0, l = 0;
			for(int j = 0; j < n-1; j++){
				if(arr[j] > arr[j+1]) l++;
				else if(arr[j] < arr[j+1]) h++;
			}
			cout << "Case " << i << ": " << h << " "<< l << "\n";
		}
	}
	return 0;
}
