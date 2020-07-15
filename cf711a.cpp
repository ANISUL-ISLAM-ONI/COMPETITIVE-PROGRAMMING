#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	getchar();
	string arr[n];
	bool ch = false;
	for(int i = 0; i < n; i++){
		cin >> arr[i];
		if(ch) continue;
		if(arr[i][0] == 'O' && arr[i][1] == 'O'){
			arr[i][0] = '+';
			arr[i][1] = '+';
			ch = true;
		}
		else if(arr[i][3] == 'O' && arr[i][4] == 'O'){
			arr[i][3] = '+';
			arr[i][4] = '+';
			ch = true;
		}
	}
	if(ch){
		cout << "YES\n";
		for(int i = 0; i < n; i++) cout << arr[i] << "\n";
	}
	else cout << "NO\n";
	return 0;
}
