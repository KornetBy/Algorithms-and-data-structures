#include <iostream>

using namespace std;

int main() {
	int x = 1;
	int i = 1;
	while (i <= 5) {
		cout << i++ << endl;
		i++;
	}

	for (int i = 1; x < 5; x++) {
		cout << x + i<< endl;
	}

	return 0;
}