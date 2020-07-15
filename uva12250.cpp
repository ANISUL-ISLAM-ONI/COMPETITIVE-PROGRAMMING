#include<bits/stdc++.h>

using namespace std;

int main(){
	string str;
	int i = 1;
	while(cin >> str){
		if(str[0] == '#') break;
		if(str == "HELLO") cout << "Case " << i << ": ENGLISH\n";
		else if(str == "HOLA") cout << "Case " << i << ": SPANISH\n";
		else if(str == "HALLO") cout << "Case " << i << ": GERMAN\n";
		else if(str == "BONJOUR") cout << "Case " << i << ": FRENCH\n";
		else if(str == "CIAO") cout << "Case " << i << ": ITALIAN\n";
		else if(str == "ZDRAVSTVUJTE") cout << "Case " << i << ": RUSSIAN\n";
		else cout << "Case " << i << ": UNKNOWN\n";
		i++;
	}
	return 0;
}
