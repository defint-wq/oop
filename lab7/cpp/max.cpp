#include "../oop.h"

int max(double *areas, int n) {
    int maxidx = 0;
    for (int i = 1; i < n; i++ ) {
        if (*(areas + i) > *(areas + maxidx)) maxidx = i;
    }

    return maxidx;
}
