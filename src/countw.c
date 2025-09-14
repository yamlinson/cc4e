#include <stdio.h>

/* Counts words in input */
int whitespace(int self);
int main(void) {
    int c, inword;
    long w;

    w = 0;
    inword = 0;
    while ((c = getchar()) != EOF ) {
        if (whitespace(c)) {
            inword = 0;
        }
        else if (!inword) {
            inword = 1;
            w++;
        }
    }
    printf("%ld\n", w);

    return 0;
}

int whitespace(int self) {
    if ( self == ' '  ||
         self == '\t' ||
         self == '\v' ||
         self == '\f' ||
         self == '\n' ) {
         return 1;
    }
    else return 0;
}
