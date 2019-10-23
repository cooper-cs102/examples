#include <stdio.h>

int main() {
    int c = 324;
    int *p = &c;

    printf("c: %d, &c: %p\n", c, &c);
    printf("p: %p, *p: %d\n", p, *p);
}
