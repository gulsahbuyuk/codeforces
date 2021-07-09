#include <iostream>
using namespace std;

string line;
int numline;
int i;

int main() {
	cin >> numline;
	for (i = 0; i < numline; i++) {
		cin >> line;
		int l;
		l = line.length();
		if (l > 10) {
			cout << line[0] << l - 2 << line[l - 1] << endl;
		}
		else {
			cout << line << endl;
		}

	}
	return 0;

};
