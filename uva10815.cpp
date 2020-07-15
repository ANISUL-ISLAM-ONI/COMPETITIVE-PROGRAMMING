#include <iostream>
#include <set>
#include <string>

using namespace std;

inline bool character(char c){
    return c >= 'a' && c <= 'z';
}

int main(){
    string in;
    set<string> words;
    while (cin >> in){
        int size = in.size();
        string current = "";
        for (int i = 0; i < size; ++i){
            char c = tolower(in[i]);
            if (character(c))
                current += c;
            else if (current != ""){
                words.insert(current);
                current = "";
            }
        }
        if (current != "")
            words.insert(current);
    }
    for (set<string>::iterator iter = words.begin(); iter != words.end(); ++iter)
        cout << *iter << '\n';
}
