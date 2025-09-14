#include <stdio.h>

/* Counts lines of code */
int significant(int c);
int main(void) {
    int c, loc, incomment, inlinecomment, last, line_counted;

    loc = incomment = inlinecomment = last = line_counted = 0;
    while ((c = getchar()) != EOF) {
        /* Reset on new lines */
        if (c == '\n') {
            line_counted = 0;
            inlinecomment = 0;
            continue;
        }
        /* Check for comments */
        if (c == '/') {
            if (last == '/') 
                inlinecomment = 1;
            else if (last == '*') 
                incomment = last = 0;
            else last = '/';
            continue;
        }
        if (c == '*') {
            if (last == '/') {
                incomment = 1;
                last = 0;
            }
            else last = '*';
            continue;
        }
        last = 0; // Reset check if comment conditions not found
        /* Count significant line */
        if (!incomment     &&
            !inlinecomment &&
            !line_counted  &&
            significant(c)
        ) {
            loc++;
            line_counted = 1;
        }
    }
    printf("%ld\n", loc);

    return 0;
}
int significant(int c) {
    if ( c == ' '  ||
         c == '\t' ||
         c == '\v' ||
         c == '\f' ||
         c == '\r' ||
         c == '\n' ||
         c == '{'  ||
         c == '}'  ||
         c == '('  ||
         c == ')'
        ) {
        return 0;
    }
    else return 1;
}
