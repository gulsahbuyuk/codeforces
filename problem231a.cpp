#include <iostream>
using namespace std;
int n;
int i;
int a, b, c;
int sum = 0;
int main() {	
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> a >> b >> c;
		if ((a + b + c) > 1) {
			sum ++;
		}
	}
	cout << sum;
	return 0;
};