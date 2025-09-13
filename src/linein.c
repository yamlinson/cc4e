#include <stdio.h>
int main() {
    char line[1000];
    printf("Enter line\n");
    /* Limit scan to 1000 characters, ignoring new lines
     * A safer implementation is in safeline */
    scanf("%[^\n]1000s", line);
    printf("Line: %s\n", line);
}
