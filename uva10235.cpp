#include<bits/stdc++.h>

using namespace std;

bool isPrime(int n){
    if (n <= 1)  return false;
    for (int i=2; i<n; i++) if (n%i == 0) return false;
	return true;
}

bool emirp(int n){
	string str = to_string(n);
	string test = str;
	reverse(str.begin(), str.end());
	int a = stoi(str);
	if(isPrime(a) && test != str) return true;
	else return false;
}

int main(){
	int n;
	while(cin >> n){
		if(isPrime(n)){
			if(emirp(n)) cout <<  n << " is emirp.\n";
			else cout << n << " is prime.\n";
		}
		else cout << n << " is not prime.\n";
	}
	return 0;
}
