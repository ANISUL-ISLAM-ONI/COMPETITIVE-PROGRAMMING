#include<bits/stdc++.h>

using namespace std;

void blank(int p){
	cout << " ";
	for(int h = 0; h < p; h++) cout << " ";
	cout << " ";
}

void line(int p){
	cout << " ";
	for(int h = 0; h < p; h++) cout << "-";
	cout << " ";
}

void both(int p){
	cout << "|";
	for(int h = 0; h < p; h++) cout << " ";
	cout << "|";
}

void right(int p){
	cout << " ";
	for(int h = 0; h < p; h++) cout << " ";
	cout << "|";
}

void left(int p){
	cout << "|";
	for(int h = 0; h < p; h++) cout << " ";
	cout << " ";
}

int main(){
	int n;
	while(cin >> n){
		string str;
		cin >> str;
		if(n == 0 && str[0] == '0') break;
		int len = str.length();
		int na = (2 * n) + 3;
		for(int i = 0; i < na; i++){
			for(int j = 0; j < len; j++){
				if(i == 0){
					if(str[j] == '1' || str[j] == '4') blank(n);
					else line(n);
				}
				else if(i == (na/2)){
					if(str[j] == '1' || str[j] == '7' || str[j] == '0') blank(n);
					else line(n);
				}
				else if(i == (na-1)){
					if(str[j] == '1' || str[j] == '4' || str[j] == '7') blank(n);
					else line(n);
				}
				else if(i > 0 && i < (na/2)){
					if(str[j] == '0' || str[j] == '4' || str[j] == '8' || str[j] == '9') both(n);
					else if(str[j] == '1' || str[j] == '2' || str[j] == '3' || str[j] == '7') right(n);
					else left(n);
				}
				else{
					if(str[j] == '2') left(n);
					else if(str[j] == '6' || str[j] == '8' || str[j] == '0') both(n);
					else right(n);
				}
				if(j != (len - 1)) cout << " ";
				else cout << "\n";
			}
		}
		cout << "\n";
	}
	return 0;
}
