
#include "iRRAM.h"
using namespace iRRAM;

int checkpoint[10] = {30, 40, 85, 100, 200, 500, 1000, 10000, 100000, 500000};

void compute () {
	REAL r = REAL("3.75");
	REAL x = REAL("0.5");
	int i;
	int cnt = 0;

	for (i = 0; i < 10; i++) {
		while (cnt < checkpoint[i]) {
			x = r * x * (1 - x);
			cnt++;
			if (cnt > 10000 && cnt % 1000 == 0) {cout << cnt << std::endl;}
	}
		cout << i << " " << checkpoint[i] << " " << x << std::endl;
	}
}

