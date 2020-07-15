#include<bits/stdc++.h>

using namespace std;

int main(){
	string sentence;
	while(getline(cin,sentence)){
		int lengthOfSentence = sentence.length();
		int count = 0;
		for(int I = 0; I < lengthOfSentence; I++){
			if(sentence[I] == ' '){
				for(int K = count-1; K >= 0; K--){
					if(sentence[K] == ' ') break;
					cout << sentence[K];
				}
				cout << " ";
			}
			count++;
		}
		for(int K = lengthOfSentence - 1; K >= 0; K--){
            if(sentence[K] == ' ') break;
        	cout << sentence[K];
        }
        cout << "\n";
	}
	return 0;
}
