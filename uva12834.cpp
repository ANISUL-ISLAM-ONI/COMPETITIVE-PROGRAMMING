#include<bits/stdc++.h>

using namespace std;

int main(){
	vector<int> vec;
	int T;
	cin >> T;
	for(int i = 1; i <= T; i++){
		int n, k;
		cin >> n >> k;
		int X[n];
		long long prof = 0;
		for(int j = 0; j < n; j++) cin >> X[j];
		for(int j = 0; j < n; j++){
			int Y;
			cin >> Y;
			if(X[j] > Y){
				int dump = X[j] - Y;
                vec.push_back(dump);
            }
			else{
				int dump = Y - X[j];
				prof += dump;
			}
		}
		sort(vec.begin(), vec.end(), greater<int>());
		int len = vec.size();
		if(k < len){
			for(int p = k; p < len; p++) prof -= vec[p];
		}
		if(prof <= 0) cout << "Case " << i << ": No Profit\n";
		else cout << "Case " << i << ": " << prof << "\n";
		vec.clear();
	}
	return 0;
}
