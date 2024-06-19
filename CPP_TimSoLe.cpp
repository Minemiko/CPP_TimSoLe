#include <iostream>
using namespace std;

int main() {
	int x;
	cout << "Tim so le be hon: ";
	cin >> x;
	cout << "\nCach 1:\n";
	for (int i = 0; i < x; i++) {
		if (i % 2 != 0) {
			cout << i << " ";
		}
	}
	cout << "\nCach 2: \n";
	for (int i = 1; i < x; i += 2) {
		cout << i << " ";
	}
}