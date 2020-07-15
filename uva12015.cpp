#include<bits/stdc++.h>

using namespace std;

int main(){
	vector<string> strg;
	int arr[10],T;
	cin >> T;
	for(int x = 1; x <= T; x++){
        int maxx = 0;
		for(int k = 0; k < 10; k++){
			string str;
			int dump;
			cin >> str >> dump;
			strg.push_back(str);
			arr[k] = dump;
			if(dump > maxx) maxx = dump;
		}
		cout << "Case #" << x << ":\n";
		for(int h = 0; h < 10; h++){
            if(maxx == arr[h]) cout << strg[h] << "\n";
		}
	}
	return 0;
}
