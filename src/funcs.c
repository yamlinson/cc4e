#include <stdio.h>
/* This was the K&R way to use forward declaration of functions,
 * which is not supported in current versions of C
int main() {
    int mymult();
    int retval;

    retval = mymult(6,7);
    printf("Answer: %d\n", retval);
}

int mymult(a, b)
    int a, b;
{
    int c = a * b;
    return c;
}
*/

/* Use a prototype instead */
int mymult(int a, int b);

int main() {
    int retval = mymult(6, 7);
    printf("Answer: %d\n", retval);
    return 0;
}

int mymult(int a, int b) {
    return a * b;
}
