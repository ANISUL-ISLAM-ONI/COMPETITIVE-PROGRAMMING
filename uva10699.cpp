#include<bits/stdc++.h>

using namespace std;

int main(){
	map<int,int> mape;
	map<int,int>::iterator itr;
	int n;
	while(cin >> n){
		if(n == 0) break;
		int m = n;
		int count = 0;
    	while(n % 2 == 0){
        	mape[2] = 1;
        	n = n/2;
    	}
    	for(int i = 3; i <= sqrt(n); i = i + 2){
        	while(n % i == 0){
            	mape[i] = 1;
            	n = n/i;
        	}
    	}
    	if(n > 2) mape[n];
		for(itr = mape.begin(); itr != mape.end(); itr++) count++;
		cout << m << " : " << count << "\n";
		mape.clear();
	}
	return 0;
}
