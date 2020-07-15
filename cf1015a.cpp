#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, m, co = 0;
	cin >> n >> m;
	int arr[m+1];
	for(int i = 1; i <= m; i++) arr[i] = 0;
	for(int i = 0; i < n; i++){
		int l, r;
		cin >> l >> r;
		for(int j = l; j <= r; j++){
			if(arr[j] == 0){
				arr[j] = 1;
				co++;
			}
		}
	}
	cout << m - co << "\n";
	bool ch = false;
	for(int i = 1; i <= m; i++){
		if(arr[i] == 0){
			if(ch == false){
				cout << i;
				ch = true;
			}
			else{
				cout << " " << i;
			}
		}
	}
	cout << "\n";
	return 0;
}
