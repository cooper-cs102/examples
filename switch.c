#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc < 2) return -1;

    const int i = atoi(argv[1]);

    switch (i) {
    case 1: printf("got 1!!\n"); break;
    case 2: printf("got 2!!\n"); break;
    default: printf("Unsupported number :(\n");
    }
    return 0;
}
