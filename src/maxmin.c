#include <stdio.h>
int main() {
    int first = 1;
    int val, maxval, minval;

    printf("Write numbers separated by space or newline\n");
    printf("EOF (Ctrl-D) when done\n");

    while (scanf("%d", &val) != EOF ) {
        if ( first || val > maxval ) maxval = val;
        if ( first || val < minval ) minval = val;
        first = 0;
    }

    printf("\nMaximum: %d\n", maxval);
    printf("Minimum: %d\n", minval);
}
