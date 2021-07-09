#include <iostream>

using namespace std;
int number;

bool is_prime(int x) {
	if (x == 2)
		return true;
	for (int i = 2; (i*i) <= x; i++) {
		if (x % i == 0)
			return false;
	}
	return true;
}


int main() {
	int t,d;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> d;
		int a = 1 + d;
		while (!is_prime(a))
			a++;
		int b = a + d;
		while (!is_prime(b))
			b++;
		cout << a*b << endl;
	}
		
	return 0;
}


