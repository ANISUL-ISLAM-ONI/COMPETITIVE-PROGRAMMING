#include<bits/stdc++.h>

using namespace std;

int main(){
	int Z, I, M, L, index = 1;
	while(cin >> Z >> I >> M >> L){
		if(Z == 0 && I == 0 && M == 0 && L == 0) break;
		int count = 0;
		int l = ((Z * L) + I) % M;
		L = l;
		do{
			l = ((Z * l) + I) % M;
			count++;
		}while(l != L);
		cout << "Case " << index << ": " << count << "\n";
		index++;
	}
	return 0;
}
