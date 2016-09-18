// compiling option : -lquadmath

#include <stdio.h>

extern "C" {
        #include "quadmath.h"
}

#define Numtype __float128

Numtype r = 3.75q;
Numtype x0 = 0.5q;

Numtype step(Numtype x) {
        return r * x * (1.0q - x);
}

int checkpoint[10] = {30, 40, 85, 100, 200, 500, 1000, 10000, 100000, 500000};
char buf[1024];

int main(void) {
        int cnt = 0;
        Numtype x = x0;
        for (int i = 0; i < 10; i++) {
                while (cnt < checkpoint[i]) {
                        cnt++;
                        x = step(x);
                }
                quadmath_snprintf(buf, 1024, "%.30Qf", x);
                printf("step %6d : %s\n", checkpoint[i], buf);
        }
        return 0;
}
