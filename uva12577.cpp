#include<bits/stdc++.h>

using namespace std;

int main(){
	string str;
	int i = 1;
	while(cin >> str){
		if(str[0] == '*') break;
		if(str == "Hajj") cout << "Case " << i << ": Hajj-e-Akbar\n";
		else if(str == "Umrah") cout << "Case " << i << ": Hajj-e-Asghar\n";
		i++;
	}
	return 0;
}
