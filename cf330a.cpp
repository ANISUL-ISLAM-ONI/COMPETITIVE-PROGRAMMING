#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, m, res = 0, co = 0;
	cin >> n >> m;
	string arr[n];
	vector<int> ith;
	vector<int> jth;
	for(int i = 0; i < n; i++){
		cin >> arr[i];
		for(int j = 0; j < m; j++){
			if(arr[i][j] == 'S'){
				ith.push_back(i);
				jth.push_back(j);
				co++;
			}
		}
	}
	for(int i = 0; i < co; i++){
		for(int j = 0; j < co; j++){
			arr[ith[i]][jth[j]] = 'S';
		}
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(arr[i][j] == '.') res++;
		}
	}
	cout << res << "\n";
	ith.clear();
	jth.clear();
	return 0;
}
