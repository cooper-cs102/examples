#include <stdio.h>

int f(int *a) { return ++*a; }

int main() {
    int x = 1;
    printf("before: %d\n", x);
    printf("result: %d\n", f(&x));
    printf("after: %d\n", x);
    return 0;
}
