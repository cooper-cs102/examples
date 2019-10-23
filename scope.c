#include <stdio.h>

static int x;

int main() {
    printf("%d\n", x);
    int x = 5;
    printf("%d\n", x);
    {
        static int x;
        printf("%d\n", x);
    }
    printf("%d\n", x);
}
