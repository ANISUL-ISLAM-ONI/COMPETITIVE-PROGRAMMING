#include<bits/stdc++.h>

using namespace std;

int main(){
	string str;
	string first = "`1234567890-=";
	int len1 = first.length();
	string second = "qwertyuiop[]\\";
	int len2 = second.length();
	string third = "asdfghjkl;\'";
	int len3 = third.length();
	string fourth = "zxcvbnm,./";
	int len4 = fourth.length();
	while(getline(cin,str)){
		int len = str.length();
		for(int i = 0; i < len; i++){
			if(str[i] >= 65 && str[i] <= 90) str[i] += 32;
			if(str[i] == ' ') cout << " ";
			else{
				for(int j = 2; j < len1; j++){
					if(str[i] == first[j]){
						cout << first[j-2];
						break;
					}
				}
				for(int j = 2; j < len2; j++){
                    if(str[i] == second[j]){
                        cout << second[j-2];
                        break;
                    }
                }
				for(int j = 2; j < len3; j++){
                    if(str[i] == third[j]){
                        cout << third[j-2];
                        break;
                    }
                }
				for(int j = 2; j < len4; j++){
                    if(str[i] == fourth[j]){
                        cout << fourth[j-2];
                        break;
                    }
                }
			}
		}
		cout << "\n";
	}
	return 0;
}
