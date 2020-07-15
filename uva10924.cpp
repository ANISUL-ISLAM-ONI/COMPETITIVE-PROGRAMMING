#include<bits/stdc++.h>

using namespace std;

bool isPrime(int n){
    if (n <= 1)  return false;
    for (int i=2; i<n; i++)  if (n%i == 0)  return false;
    return true;
}

int main(){
	string str;
	while(cin >> str){
		int sum = 0;
		int len = str.length();
		for(int i = 0; i < len; i++){
			if(str[i] >= 'a' && str[i] <= 'z') sum += (str[i] - 96);
			else if(str[i] >= 'A' && str[i] <= 'Z') sum += (str[i] - 38);
		}
		if(isPrime(sum) || sum == 1) cout << "It is a prime word.\n";
		else cout << "It is not a prime word.\n";
	}
	return 0;
}
