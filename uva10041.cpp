#include<bits/stdc++.h>

using namespace std;

int main(){
	int testCase;
	cin >> testCase;
	for(int I = 0; I < testCase; I++){
		int relativesNo;
		cin >> relativesNo;
		int relative[relativesNo];
		for(int K = 0; K < relativesNo; K++){
			cin >> relative[K];
		}
		sort(relative, relative + relativesNo);
		int median = relative[relativesNo / 2];
		int maxDistance = 0;
		for (int K = 0; K < relativesNo; K++) {
			maxDistance += abs(median - relative[K]);
		}
		cout << maxDistance << "\n";
	}
	return 0;
}
