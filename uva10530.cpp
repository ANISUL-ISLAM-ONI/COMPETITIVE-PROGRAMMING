#include<bits/stdc++.h>

using namespace std;

int main(){
	int ma = 11, mi = 0;
	int n;
	while(cin >> n){
		if(n == 0) break;
		string str;
		cin >> str;
		if(str == "too"){
			string an;
			cin >> an;
			if(an == "high"){
				ma = min(ma, n);
			}
			else{
				mi = max(mi, n);
			}
		}
		else{
			string an;
			cin >> an;
			if(n > mi && n < ma) cout << "Stan may be honest\n";
			else cout << "Stan is dishonest\n";
			ma = 11;
			mi = 0;
		}
	}
	return 0;
}
