#include <bits/stdc++.h>

using namespace std;

int main(){
	string str;
	cin >> str;
	vector<int> vec;
	int len = str.length();
	for(int i = 0; i < len; i++){
		if(str[i] >= '0' && str[i] <= '3'){
			int dump = str[i] - '0';
			vec.push_back(dump);
		}
	}
	sort(vec.begin(), vec.end());
	len /= 2;
	for(int i = 0; i < len; i++) cout << vec[i] << "+";
	cout << vec[len] << "\n";
	return 0;
}
