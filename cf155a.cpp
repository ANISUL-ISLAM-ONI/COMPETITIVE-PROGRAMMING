#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, a, co = 0;
    cin >> n >> a;
    int ma = a, mi = a;
    for(int i = 1; i < n; i++){
    	cin >> a;
	if(a < mi){
	    mi = a;
	    co++;
	}
	if(a > ma){
	    ma = a;
	    co++;
	}
    }
    cout << co << "\n";
    return 0;
}
