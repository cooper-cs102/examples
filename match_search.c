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
