#include <bits/stdc++.h>

using namespace std;

int main(){
	int s, va, vb, ta, tb;
	cin >> s >> va >> vb >> ta >> tb;
	int a = ta + (va * s) + ta;
	int b = tb + (vb * s) + tb;
	if(a < b) cout << "First\n";
	else if(a > b) cout << "Second\n";
	else cout << "Friendship\n";
	return 0;
}
