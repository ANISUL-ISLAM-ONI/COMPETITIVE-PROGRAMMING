#include <bits/stdc++.h>

using namespace std;

int main(){
	int n = 50;
	bool arr[n+1];
	for(int i = 2; i < 51; i++) arr[i] = true;
	for(int i = 2; i * i <= n; i++){
		if(arr[i]){
			for(int j = i * i; j <= n; j += i) arr[j] = false;
		}
	}
	int a, b;
	cin >> a >> b;
	if(arr[a] == true && arr[b] == true){
		bool ch = true;
		for(int i = a+1; i < b; i++){
			if(arr[i]){
				cout << "NO\n";
				ch = false;
				break;
			}
		}
		if(ch) cout << "YES\n";
	}
	else cout << "NO\n";
	return 0;
}
