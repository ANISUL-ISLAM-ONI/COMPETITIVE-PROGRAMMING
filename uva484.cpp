#include<bits/stdc++.h>

using namespace std;

int main(){
	map<int,int> ma;
	map<int,int>::iterator itr;
	vector<int> ve;
	int n, i = 0;
	while(cin >> n){
		ma[n]++;
		int flag = 0;
		for(auto y : ve)  if(n == y) flag = 1;
		if(flag == 0)  ve.push_back(n);
	}
    for(auto z : ve){
        for(itr = ma.begin(); itr != ma.end(); itr++){
            if(z == itr -> first){
                cout << itr -> first << " " << itr -> second << "\n";
                break;
            }
        }
    }
	return 0;
}
