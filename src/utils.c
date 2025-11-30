#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "utils.h"

void chomp(char *s) {
    int n = strlen(s);
    if (n > 0 && s[n-1] == '\n') s[n-1] = '\0';
}

int read_line(const char *prompt, char *buf, int size) {
    if (prompt) printf("%s", prompt);
    if (fgets(buf, size, stdin) == NULL) return 0;
    chomp(buf);
    return 1;
}

int same_ci(const char *a, const char *b) {
    while (*a && *b) {
        if (tolower(*a) != tolower(*b)) return 0;
        a++;
        b++;
    }
    return (*a == '\0' && *b == '\0');
}
