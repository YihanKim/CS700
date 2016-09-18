
#include "iRRAM.h"
using namespace iRRAM;


int checkpoint[10] = {30, 40, 85, 100, 200, 500, 1000, 10000, 100000, 500000};

void compute () {
	RATIONAL r = (double) 15 / 4;
	RATIONAL x = (double) 1 / 2;
	int i;

	for (i = 0; i < 300; i++) {
		cout << i << " " << REAL(x) << "\n";
		x = r * x * (1 - x);
	}
}

