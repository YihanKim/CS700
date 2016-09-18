#include <iostream>
using namespace std;
#define Numtype double

Numtype r = 3.75;
Numtype x0 = 0.5;

int checkpoint[10] = {30, 40, 85, 100, 200, 500, 1000, 10000, 100000, 500000};

int main(void) {
	int cnt = 0;
	Numtype x = x0;
	for (int i = 0; i < 10; i++) {
		while (cnt < checkpoint[i]) {
			cnt++;
			x = r * x * (1 - x);
		}
		cout << i << " " << checkpoint[i] << " " << x << endl;
	}
	return 0;
}
