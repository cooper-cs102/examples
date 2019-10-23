#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc < 2) return -1;

    const int i = atoi(argv[1]);
    // Bad indentation, braces would help!!
    if (i % 2)
        if (i < 5)
            printf("this is a good number\n");
        else if (i > 100)
            printf("this is really big, i kinda like it too\n");
    else
        printf("too even\n");
    if (i < 5)
        printf("i is less than 5!\n");
        printf("cool!\n");
    printf("End program\n");
    return 0;

}
