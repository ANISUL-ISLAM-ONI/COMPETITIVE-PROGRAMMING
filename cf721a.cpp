#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, co = 0;
	cin >> n;
	vector<int> res;
	for(int i = 0; i < n; i++){
		char a;
		cin >> a;
		if(a == 'B'){
			co++;
		}
		else{
			if(co != 0){
				res.push_back(co);
				co = 0;
			}
		}
	}
	if(co != 0) res.push_back(co);
	int len = res.size();
	cout << len << "\n";
	len--;
	for(int i = 0; i < len; i++) cout << res[i] << " ";
	if(len >= 0) cout << res[len] << "\n";
	res.clear();
	return 0;
}
