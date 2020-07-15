#include<bits/stdc++.h>

using namespace std;

int main(){
	string s,t;
	while(cin >> s >> t){
		int count = 0;
		int len = s.length();
		int nel = t.length();
		int P = 0;
		for(int I = 0; I < len; I++){
			for(int K = P; K < nel; K++){
				if(s[I] == t[K]){
					count++;
					P = K + 1;
					break;
				}
			}
		}
		if(len == count) cout << "Yes\n";
		else cout << "No\n";
	}
	return 0;
}
