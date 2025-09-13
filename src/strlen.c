#include <stdio.h>
int py_len(char self[]);
int main() {
    char x[] = "Hello";
    printf("%s %d\n", x, py_len(x));
}
int py_len(char self[]) {
    int i;
    for(i=0; self[i]; i++);
    return i;
}
