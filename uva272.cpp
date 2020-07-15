#include<bits/stdc++.h>

using namespace std;

int main() {
	string line;
	bool open = true;

	while (getline(cin, line)) {
		int len = line.length();

		for (int i = 0; i < len; i++) {
			if (line[i] == '"') {
				if (open)
					cout << "``";
				else
					cout << "''";

				open = !open;
			}
			else
				printf("%c", line[i]);
		}
		printf("\n");
	}

	return 0;
}
