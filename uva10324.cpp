#include<bits/stdc++.h>

using namespace std;

int main(){
	string str;
	int index = 1, q;
	while(cin >> str >> q){
		cout << "Case " << index << ":\n";
        index++;
		for(int i = 0; i < q; i++){
			int a, b, flag = 0;
			cin >> a >> b;
			int minn = min(a, b);
			int maxx = max(a, b);
			for(int j = minn; j < maxx; j++){
				if(str[j] != str[j+1]){
					cout << "No\n";
					flag = 1;
					break;
				}
			}
			if(flag == 0) cout << "Yes\n";
		}
	}
	return 0;
}
