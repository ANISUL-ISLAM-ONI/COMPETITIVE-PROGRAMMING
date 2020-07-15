#include<bits/stdc++.h>

using namespace std;

int main(){
	while(1){
		int n, m;
		cin >> n >> m;
		if(n == 0 && m == 0) break;
		int head[n];
		int knight[m];
		for(int i = 0; i < n; i++) cin >> head[i];
		for(int i = 0; i < m; i++) cin >> knight[i];
		sort(head, head + n);
		sort(knight, knight + m);
		int sum = 0;
		bool ok = true;
		for(int i = 0,j = 0;i < n && ok;++i){
            while(j < m && knight[j] < head[i]) ++j;
            if(j == m) ok = false;
            else sum += knight[j++];
        }
		if(!ok) cout << "Loowater is doomed!\n";
		else cout << sum << "\n";
	}
	return 0;
}
