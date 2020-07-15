#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, m, o = 1;
	bool ch = false;
	map<int, double> mape;
	while(cin >> n >> m){
		if(n == 0 && m == 0){
			break;
		}
		if(ch) cout << "\n";
		ch = true;
		getchar();
		int al = 0;
		string res;
		while(n--){
			string dump;
			getline(cin, dump);
		}
		while(m--){
			string sump;
			getline(cin, sump);
			double a;
			int b;
			cin >> a >> b;
			getchar();
			int t = b;
			while(t--){
				string pump;
				getline(cin, pump);
			}
			if(b > al){
				res = sump;
				al = b;
				mape[b] = a;
			}
			else if(b == al){
				if(a < mape[b]){
					res = sump;
					mape[b] = a;
				}
			}
		}
		cout << "RFP #" << o << "\n" << res << "\n";
		mape.clear();
		o++;
	}
	return 0;
}
