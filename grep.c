#include <stdio.h>

int match(const char *needle, const char *haystack) {
    if (!*needle) return 1;
    if (!*haystack || *haystack != *needle) return 0;
    return match(needle + 1, haystack + 1);
}

int search(const char *needle, const char *haystack) {
    for (int i = 0; haystack[i]; ++i)
        if (match(needle, haystack + i)) return i;
    return -1;
}

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
