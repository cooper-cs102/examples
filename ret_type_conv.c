#include <stdio.h>

dummy() { return 1.5; }

float f(int mode) {
    if (mode)
        return 5 / 2;
    else
        return 5.0 / 2.0;
}

int main() {
    printf("dummy(): %d\n", dummy());
    printf("f(0): %f\n", f(0));
    printf("f(1): %f\n", f(1));
}
