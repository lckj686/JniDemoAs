#include "sum_demo.h"

extern int sum(int a, int b) {
    int s1 = sub1(a, b);
    int s2 = sub2(a, b);
    return s1 + s2;
}

int sub1(int a, int b) {
    return a + b;
}

int sub2(int a, int b) {
    return a + 2 * b;
}

