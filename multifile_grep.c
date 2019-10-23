#include <stdio.h>
#include "match_search.h"

int main(int argc, char **argv) {
    if (argc < 3) return -1;
    const char *needle = argv[1];
    for (int i = 2; i < argc; ++i) {
        int index = search(needle, argv[i]);
        if (index >= 0)
            printf("Found string \"%s\" at index %d in input %d\n", needle,
                   index, i - 1);
        else
            printf("Didn't find string \"%s\" in input %d\n", needle, i - 1);
    }
    return 0;
}
