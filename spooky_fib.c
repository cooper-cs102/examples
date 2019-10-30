#include <stdio.h>

// fib (n) = fib(n - 1) + fib (n - 2)
// fib (1) = 1
// fib (0) = 1
int spooky_fib(int n) {
    if (n < 2) return 1;
    return spooky_fib(n - 1) + spooky_fib(n - 2);
}

int fib(int n) {
    int i = 0;
    int r = 1;
    int rp = 1;
    for (i = 1; i < n; ++i) {
        int rnew = r + rp;
        rp = r;
        r = rnew;
    }
    return r;
}

int main() {
    for (int i = 0; i < 100; ++i) printf("%d\n", fib(i));
    return 0;
}
