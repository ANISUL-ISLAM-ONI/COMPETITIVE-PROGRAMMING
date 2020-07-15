#include<bits/stdc++.h>

using namespace std;

int main(){
	int T;
	map<int, string> mape;
	map<int, string>::iterator itr;
	vector<string> vec;
	scanf("%d\n", &T);
	while(T--){
		string index, val, dump = "";
		getline(cin, index);
		getline(cin, val);
		int len = val.length();
		for(int i = 0; i < len; i++){
			if(val[i] == ' '){
				vec.push_back(dump);
				dump = "";
			}
			else dump += val[i];
		}
		vec.push_back(dump);
		dump = "";
		int len1 = index.length();
		int y = 0;
    	for(int i = 0; i < len1; i++){
			if(index[i] == ' '){
				int u = stoi(dump);
				mape[u] = vec[y];
				y++;
				dump = "";
			}
			else dump += index[i];
    	}
    	int vv = stoi(dump);
		mape[vv] = vec[y];
		for(itr = mape.begin(); itr != mape.end(); itr++){
			cout << itr -> second << "\n";
		}
		if(T > 0){
			cout << "\n";
			getchar();
		}
		mape.clear();
		vec.clear();
	}
	return 0;
}
