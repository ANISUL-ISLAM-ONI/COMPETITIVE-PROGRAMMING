#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, pre, co = 0;
	vector<int> vec;
	cin >> n >> pre;
	for(int i = 1; i < n; i++){
		int a;
		cin >> a;
		if(a == 1){
			vec.push_back(pre);
			co++;
		}
		pre = a;
	}
	cout << co + 1 << "\n";
	for(int i = 0; i < co; i++) cout << vec[i] << " ";
	cout << pre << "\n";
	return 0;
}
