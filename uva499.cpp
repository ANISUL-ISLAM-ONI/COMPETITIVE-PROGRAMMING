#include<bits/stdc++.h>

using namespace std;

int main(){
	string s;
	while(getline(cin, s)){
		map<char , int > m;
		map<char , int >::iterator itr;
		int len = s.length();
		for(int i = 0; i < len; i++){
			if(s[i] >= 65 && s[i] <= 90) m[s[i]]++;
			else if(s[i] >= 97 && s[i] <= 122) m[s[i]]++;
		}
		int max = 0;
		for(itr = m.begin(); itr != m.end(); itr++){
			if(itr -> second > max) max = itr -> second;
		}
		for(itr = m.begin(); itr != m.end(); itr++){
			if(itr -> second == max) cout << itr -> first;
		}
		cout << " " << max << "\n";
		m.clear();
	}
	return 0;
}
