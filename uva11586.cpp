#include<bits/stdc++.h>

using namespace std;

int main(){
	int T;
	scanf("%d\n",&T);
	while(T--){
		string str;
		getline(cin, str);
		int len = str.length();
		int male = 0, female = 0;
		for(int i = 0; i < len; i++){
			if(str[i] == 'F') female++;
			else if(str[i] == 'M') male++;
		}
		if(male == female && male > 1) cout << "LOOP\n";
		else cout << "NO LOOP\n";
	}
	return 0;
}
