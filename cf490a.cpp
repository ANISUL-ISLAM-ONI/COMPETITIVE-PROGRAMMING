#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	vector<int> aa, bb, cc;
	cin >> n;
	for(int i = 1; i <= n; i++){
		int x;
		cin >> x;
		if(x == 1) aa.push_back(i);
		else if(x == 2) bb.push_back(i);
		else cc.push_back(i);
	}
	int mi = INT_MAX, a = aa.size(), b = bb.size(), c = cc.size();
	mi = min(a, b);
	mi = min(mi, c);
	cout << mi << "\n";
	for(int i = 0; i < mi; i++){
		cout << aa[i] << " " << bb[i] << " " << cc[i] << "\n";
	}
	aa.clear();
	bb.clear();
	cc.clear();
	return 0;
}
