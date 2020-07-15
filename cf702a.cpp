#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, pre, ma = 0, co = 1;
	cin >> n >> pre;
	for(int i = 1; i < n; i++){
		int a;
		cin >> a;
		if(a > pre){
			co++;
		}
		else{
			ma = max(co, ma);
			co = 1;
		}
		pre = a;
	}
	ma = max(co, ma);
	cout << ma << "\n";
	return 0;
}
