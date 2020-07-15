#include<bits/stdc++.h>

using namespace std;

struct stru{
	string str;
	int count;
};

int measure(string s){
	int cn = 0;
	int n = s.length();
    for (int i = 1; i < n; i++){
        char key = s[i];
        int j = i - 1;
        while (j >= 0 && s[j] > key){
            s[j + 1] = s[j];
            j = j - 1;
			cn++;
        }
        s[j + 1] = key;
    }
	return cn;
}

bool comp(stru a, stru b){
	if(a.count < b.count) return true;
	return false;
}

int main(){
	int T;
	cin >> T;
	while(T--){
		int n, sz;
		cin >> n >> sz;
		stru nd[sz];
		for(int i = 0;  i < sz; i++){
			cin >> nd[i].str;
			nd[i].count = measure(nd[i].str);
		}
		stable_sort(nd, nd + sz, comp);
		for(int i = 0; i < sz; i++){
			cout << nd[i].str << "\n";
		}
		if(T != 0)cout << "\n";
	}
	return 0;
}
