#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	vector<int> vec;
	cin >> n;
	int a, len;
	cin >> a;
	len = a;
	while(a--){
		int temp;
		cin >> temp;
		vec.push_back(temp);
	}
	cin >> a;
	len += a - 1;
	while(a--){
		int temp;
		cin >> temp;
		vec.push_back(temp);
	}
	if(len == -1){
		cout << "Oh, my keyboard!\n";
		return 0;
	}
	sort(vec.begin(), vec.end());
	for(int i = 0; i < len; i++){
		if(vec[i+1] - vec[i] > 1){
			cout << "Oh, my keyboard!\n";
			return 0;
		}
	}
	if(vec[len] >= n && vec[0] == 1) cout << "I become the guy.\n";
	else cout << "Oh, my keyboard!\n";
	return 0;
}
