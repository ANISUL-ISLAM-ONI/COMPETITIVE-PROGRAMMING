#include<bits/stdc++.h>

using namespace std;

int main(){
	vector<int> vec;
	map<int, int> mape;
	map<int, int>::iterator itr;
	string str;
	int temp = 1;
	while(getline(cin, str)){
		int len = str.length();
		for(int i = 0; i < len; i++){
			int a = str[i];
			mape[a]++;
		}
		int j = 0;
		for(itr = mape.begin(); itr != mape.end(); itr++){
			vec.push_back(itr -> second);
			j++;
		}
		sort(vec.begin(), vec.end());
		if(temp != 1) cout << "\n";
		for(int i = 0; i < j; i++){
            itr = mape.end();
			while(1){
                if(itr == mape.end()){
                    itr--;
                    continue;
                }
				if(vec[i] == itr -> second){
					cout << itr -> first << " " << itr -> second << "\n";
					temp++;
					itr -> second = 0;
					break;
				}
				if(itr == mape.begin()) break;
				itr--;
			}
		}
		vec.clear();
		mape.clear();
	}
	return 0;
}
