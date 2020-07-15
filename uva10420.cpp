#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	string str[n];
	for(int i = 0; i < n; i++){
		string a;
		cin >> str[i];
		getline(cin,a);
	}
	sort(str, str + n);
	for(int i = 0; i < n - 1; i++){
		int count = 1;
		for(int j = i + 1; j < n; j++){
			if(str[i] == str[j]){
				count++;
				str[j] = "0\n";
			}
		}
		if(str[i][0] != '0') cout << str[i] << " " << count << "\n";
	}
	return 0;
}
